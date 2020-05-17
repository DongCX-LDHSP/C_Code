#include <stdio.h>
#include <stdlib.h>

void Read_Score(FILE *p1,FILE *p2,int br);
void Cal_Total_Aver(FILE *p1,FILE *p2);
int main()
{
    FILE *pStRe1,*pStRe2;
    char ch;
    int br=0;
    pStRe1=fopen("stRecord1.txt","r");
    pStRe2=fopen("stRecord2.txt","w");
    if(pStRe1!=NULL&&pStRe2!=NULL)
    {
        while(!feof(pStRe1))///计算行数
        {
            while((ch=fgetc(pStRe1))!='\n'&&ch!=EOF);
            br++;
        }
        rewind(pStRe1);
        Read_Score(pStRe1,pStRe2,br);
        printf("成绩计算完毕。\n结果存放于当前目录下的stRecord2.txt。");
    }
    else
        printf("Open the file failed!");
    return 0;
}
void Read_Score(FILE *p1,FILE *p2,int br)
{
    int i=0,space;
    char ch;
    for(;i<=br&&!feof(p1);i++)
    {
        for(space=0;space<2;)
        {
            if((ch=fgetc(p1))!=EOF)
            {
                fputc(ch,p2);
                if(ch==' ')
                    space++;
            }
        }
        Cal_Total_Aver(p1,p2);
    }
}
void Cal_Total_Aver(FILE *p1,FILE *p2)
{
    char ch,total[]="total=",aver[]="aver=";
    int i,sum=0,count=0,temp=0;
    while(!feof(p1)&&(ch=fgetc(p1))!=EOF)
    {
        if(ch>='0'&&ch<='9')
            temp=temp*10+(int)(ch-'0');
        else
        {
            sum+=temp;
            count++;
            temp=0;
            if(ch=='\n')
                break;
        }
    }
    for(i=0;aver[i]!='\0';i++)
        fputc(aver[i],p2);
    fprintf(p2,"%.2f ",(float)sum/count);
    for(i=0;total[i]!='\0';i++)
        fputc(total[i],p2);
    fprintf(p2,"%d\n",sum);
}
