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
    int is_one;///���ڸ�֪Space����δ��ǰ�ƵĴ���ǰ�ĶεĽ�β�Ƿ��ǿո�
    ///int substraction;///����Space�������Ķγ���
    *pStart=0;
    *pEnd=column-1;
    do
    {
        if(a[*pEnd]=='!'||a[*pEnd]==','||a[*pEnd]=='.')///��Ϊ�����ţ�ֱ�ӽ��ı����---------case one
        {
            for(;*pStart<=*pEnd;*pStart=*pStart+1)///�˴�����������ձ����壬���޸�Ӧ�þ������ձ���
                printf("%c",a[*pStart]);
            printf("\n");
            *pStart=*pEnd+1;
            *pEnd=*pEnd+column/*-1*/;///˼��һ�������-1��Ӧ��Ӧ����Ŷ
        }
        else if(a[*pEnd]==' ')///��Ϊ�ո�
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
        else///���һ������ĸ�����
        {
            while(a[*pEnd]!=' '&&a[*pEnd]!='!'&&a[*pEnd]!='.'&&a[*pEnd]!=',')///ǰ��ֱ�����������Ż�ո�
                *pEnd=*pEnd-1;
            if(a[*pEnd]==' ')///ǰ�ƺ�Ϊ�ո�����------case two
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
            else///ǰ�ƺ�Ϊ�������---------case two
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
        strOut[++i]=' ';///����һ���ո�-----ע��˴�strOut���±�
        for(;i<len;i++)
        {
            strOut[i+1]=strALine[i];///��strOut����һλ�ٽ��и�ֵ
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
    int numColumn;///����
    int textLen;///�ı����ȣ������
    int start,end;///ÿһ�п�ʼ�ͽ�����λ��
    int *pStart=&start,*pEnd=&end;
    textLen=strlen(strText);
    printf("Please input the column(column>=20):");///���������Ķ��еĲ��ֵ��ʣ���nС��20ʱ�������ֻ���һ�����ʵ���������ܲ���ո�
    scanf("%d",&numColumn);
    if(textLen<=numColumn)///���ı�����С������ֱ�ӽ��ı����
    {
        printf("%s\n",strText);
    }
    else///�ı����ȴ������������
    {
        separateLine(strText,pStart,pEnd,numColumn,textLen);
    }
    return 0;
}
