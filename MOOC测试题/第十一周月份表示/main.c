#include <stdio.h>
#include <stdlib.h>
#define N 13

int main()
{
    char *month[N]={"January","February","March","April","May","June","July","August","September","October","November","December","Illegal month"};
    int n;
    printf("Input month number:\n");
    scanf("%d",&n);
    if(n>=1&&n<=12)
    {
        printf("month %d is %s\n",n,month[n-1]);
    }
    else
    {
        printf("%s\n",month[12]);
    }
    return 0;
}
