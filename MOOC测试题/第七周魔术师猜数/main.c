#include <stdio.h>
#include <stdlib.h>

int Magic(int m);
int Magic(int m)
{
    int a,b,c;
    int i;
    for(i=100;i<=999;i++)
    {
        a=i/100;
        b=(i-a*100)/10;
        c=i%10;
        if(a*100+2*c*10+2*b+2*a*10+2*c*100+2*a+c+2*b*100+b*10==m)
        {
            printf("The number is %d\n",i);
            break;
        }
    }
    if(i==1000)
    {
        printf("The sum you calculated is wrong!\n");
    }
    return 0;
}
int main()
{
    int answer;
    scanf("%d",&answer);
    Magic(answer);
    return 0;
}
