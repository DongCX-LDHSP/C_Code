#include <stdio.h>
#include <stdlib.h>

int main()
{
    int birth,it,now,count=0;
    long unsigned heart_beats;
    printf("Input your birth year:");
    scanf("%d",&birth);
    printf("Input this year:");
    scanf("%d",&now);
    for(it=birth;it<now;it++)
    {
        if((it%4==0&&it%100!=0)||it%400==0)
        {
            count++;
        }
    }
    heart_beats=((now-birth-count)*365*24*60+count*366*24*60)*75;
    printf("The heart beats in your life: %lu",heart_beats);
    return 0;
}

