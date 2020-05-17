#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct clock
{
    int hour;
    int minute;
    int second;
}CLOCK;
CLOCK CalculateTime(CLOCK t1, CLOCK t2);
CLOCK CalculateTime(CLOCK t1, CLOCK t2)
{
    CLOCK temp;
    int a,b,x;
    a=t1.hour*60+t1.minute;
    b=t2.hour*60+t2.minute;
    x=fabs(a-b);
    temp.hour=x/60;
    temp.minute=x%60;
    return temp;
}
int main()
{
    CLOCK t1,t2,j;
    printf("Input time one:(hour£¬minute):");
    scanf("%d,%d",&t1.hour,&t1.minute);
    printf("Input time two: (hour£¬minute):");
    scanf("%d,%d",&t2.hour,&t2.minute);
    j=CalculateTime(t1,t2);
    printf("%dhour,%dminute\n",j.hour,j.minute);
    return 0;
}
