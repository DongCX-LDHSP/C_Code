#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000

int Blank(char strALine[200],int sub);
void Space(char strALine[200],int column,int is_one);
void separateLine(char a[N+1],int *pStart,int *pEnd,int column,int textLen);
void separateLine(char a[N+1],int *pStart,int *pEnd,int column,int textLen)
{
    char strALine[200];
    int i=0;
    int is_one;///用于告知Space函数未经前移的传入前文段的结尾是否是空格
    ///int substraction;///传入Space函数的文段长度
    *pStart=0;
    *pEnd=column-1;
    do
    {
        if(a[*pEnd]=='!'||a[*pEnd]==','||a[*pEnd]=='.')///若为标点符号，直接将文本输出---------case one
        {
            for(;*pStart<=*pEnd;*pStart=*pStart+1)///此处输出不具有普遍意义，经修改应该具有了普遍性
                printf("%c",a[*pStart]);
            printf("\n");
            *pStart=*pEnd+1;
            *pEnd=*pEnd+column/*-1*/;///思考一下这个”-1“应不应该有哦
        }
        else if(a[*pEnd]==' ')///若为空格
        {
            ///substraction=*pEnd-*pStart-1;
            for(i=0;*pStart<*pEnd;i++,*pStart=*pStart+1)
            {
                strALine[i]=a[*pStart];
            }
            strALine[i]='\0';
            is_one=1;
            Space(strALine,column,is_one);
            *pStart=*pStart+1;
            *pEnd=*pStart+column-1;
        }
        else///最后一个是字母的情况
        {
            while(a[*pEnd]!=' '&&a[*pEnd]!='!'&&a[*pEnd]!='.'&&a[*pEnd]!=',')///前移直到遇到标点符号或空格
                *pEnd=*pEnd-1;
            if(a[*pEnd]==' ')///前移后为空格的情况------case two
            {
                ///substraction=*pEnd-*pStart;
                for(i=0;/*i<column-1&&*/*pStart<*pEnd;i++,*pStart=*pStart+1)
                {
                    strALine[i]=a[*pStart];
                }
                strALine[i]='\0';
                is_one=0;
                Space(strALine,column,is_one);
                *pStart=*pStart+1;
                *pEnd=*pStart+column-1;
            }
            else///前移后为标点的情况---------case two
            {
                ///substraction=*pEnd-*pStart+1;
                for(i=0;i<column-1&&*pStart<=*pEnd;i++,*pStart=*pStart+1)
                {
                    strALine[i]=a[*pStart];
                }
                strALine[i]='\0';
                is_one=0;
                Space(strALine,column,is_one);
                ///*pStart=*pStart+1;
                *pEnd=*pStart+column-1;
            }
        }
    }while(*pEnd<=textLen);
    for(;a[*pStart]!='\0';*pStart=*pStart+1)
        printf("%c",a[*pStart]);
}
void Space(char strALine[],int column,int is_one)
{
    char strOut[column+1];
    int i,j,count_space;
    int numInsert,numInsert1;
    int len;
    for(i=0;i<column;i++)
        strOut[i]=' ';
    strOut[i]='\0';
    len=strlen(strALine);
    if(is_one)///-------case one-----debug at 11.19 19:19
    {
        for(i=0;strALine[i]!=' ';i++)
            strOut[i]=strALine[i];
        strOut[++i]=' ';///插入一个空格-----注意此处strOut的下标
        for(;i<len;i++)
        {
            strOut[i+1]=strALine[i];///将strOut后移一位再进行赋值
        }
        strOut[i+1]='\0';
        puts(strOut);
    }
    else///-------case two
    {
        count_space=Blank(strALine,len);
        numInsert=(column-len)/count_space;
        numInsert1=(column-len)%count_space;
        for(i=0,j=0;i<len;i++,j++)
        {
            if(' '==strALine[i])
            {
                j=j+numInsert;///------debug at 11.19 19:50
                if(0<numInsert1)
                {
                j++;
                numInsert1--;
                }
            }
            strOut[j]=strALine[i];
        }
        strOut[j]='\0';
        puts(strOut);
    }
}
int Blank(char strALine[],int len)
{
    int i,count_space=0;
    for(i=0;i<len;i++)
    {
        if(strALine[i]==' ')
            count_space++;
    }
    return count_space;
}
int main()
{
    char strText[N+1]={"We have an old musical instrument.It is called a clavichord.It was made in Germany in 1681.Our clavichord is kept in the living-room.It has belonged to our family for a long time.The instrument was bought by my grandfather many years ago.Recently it was damaged by a visitor.She tried to play jazz on it!She struck the keys too hard and two of the strings were broken.My father was shocked.Now we are not allowed to touch it.It is being repaired by a friend of my father's."};
    int numColumn;///列数
    int textLen;///文本长度，含标点
    int start,end;///每一行开始和结束的位置
    int *pStart=&start,*pEnd=&end;
    textLen=strlen(strText);
    printf("Please input the column(column>=20):");///由于用例文段中的部分单词，当n小于20时，会出现只输出一个单词的情况，不能插入空格
    scanf("%d",&numColumn);
    if(textLen<=numColumn)///若文本长度小于列数直接将文本输出
    {
        printf("%s\n",strText);
    }
    else///文本长度大于列数的情况
    {
        separateLine(strText,pStart,pEnd,numColumn,textLen);
    }
    return 0;
}
