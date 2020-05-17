#include <stdio.h>
#include <stdlib.h>

int main()
{
    int birth,now,count=0;
    printf("Input your birth year:");
    scanf("%d",&birth);
    printf("Input this year:");
    scanf("%d",&now);
    for(;birth<=now;birth++)
    {
        if((birth%4==0&&birth%100!=0)||birth%400==0)
        {
            printf("%d\n",birth);
            count++;
        }
    }
    printf("count=%d\n",count);
    return 0;
}
