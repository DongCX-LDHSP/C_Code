#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nYear,nMonth,nDay;
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};///存储每月的天数
    int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};///存储闰年每月的天数
    int i;
    int r;
    int t;
    int n=0;
    int present=0;
    int flag=1;
    scanf("%4d-%2d-%2d",&nYear,&nMonth,&nDay);
    if(!(nYear>=1990&&nMonth>=1&&nMonth<=12&&nDay<=31&&nDay>=1))
    {
        flag=0;
        printf("Invalid input");
    }
    if(flag)
    {
        if((nYear-1989)%4==3)
        {
            r=(nYear-1989)%4;
            t=(nYear-1989)/4;
            for(i=0;i<nMonth-1;i++)
            {
                present+=b[i];
            }
            present+=nDay;
            n=t*1461+(r-1)*365+present;
        }
        else
        {
            r=(nYear-1989)%4;
            t=(nYear-1989)/4;
            for(i=0;i<nMonth-1;i++)
            {
                present+=a[i];
            }
            present+=nDay;
            n=t*1461+(r-1)*365+present;
        }
        if(n%5==1||n%5==2||n%5==3)
        {
            printf("He is working");
        }
        else if(n%5==4||n%5==0)
        {
            printf("He is having a rest");
        }
    }
    return 0;
}
