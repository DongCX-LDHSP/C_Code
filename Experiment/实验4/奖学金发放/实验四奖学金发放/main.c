#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a[10],b[10],c[10];///a用于存储学号，b用于存储成绩，c用于存储奖项
    int i;
    float aver=0;
    srand(time(0));
    for(i=0;i<10;i++)
    {
        a[i]=1811101+i;
        b[i]=rand()%100+1;
    }
    for(i=0;i<10;i++)
    {
        aver+=b[i];
    }
    printf(" 10名学生的成绩分别为：\n");
    for(i=0;i<10;i++)
    {
        printf("%4d",b[i]);
    }
    printf("\n\n");
    aver=aver/10;
    printf(" 获一等奖的最低分是:%.2f\n",1.1*aver);
    printf(" 获二等奖的最低分是:%.2f\n",1.05*aver);
    for(i=0;i<10;i++)
    {
        if(b[i]>1.1*aver)
        {
            c[i]=1;
        }
        else if(b[i]>1.05*aver)
        {
            c[i]=2;
        }
        else
        {
            c[i]=0;
        }
    }
    printf("\n   学号    成绩    奖金   \n");
    for(i=0;i<10;i++)
    {
        printf("%8d  %4d    ",a[i],b[i]);
        if(c[i]==1)
        {
            printf("一等奖\n");
        }
        else if(c[i]==2)
        {
            printf("二等奖\n");
        }
        else
        {
            printf("无奖金\n");
        }
        printf("\n");
    }
    return 0;
}
