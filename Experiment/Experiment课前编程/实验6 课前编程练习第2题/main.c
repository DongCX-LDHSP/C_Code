#include <stdio.h>
#include <stdlib.h>

int main()
{
    int leap_year[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int nonleap_year[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int *p;
    int nYear,nMonth,nDay;
    int i,sum=0;
    scanf("%d%d%d",&nYear,&nMonth,&nDay);
    if((nYear%4==0&&nYear%100!=0)||(nYear%400==0))
        p=leap_year;
    else
        p=nonleap_year;
    for(i=0;i<nMonth-1;i++)
    {
        sum+=p[i];
    }
    sum+=nDay;
    printf("%d\n",sum);
    return 0;
}
