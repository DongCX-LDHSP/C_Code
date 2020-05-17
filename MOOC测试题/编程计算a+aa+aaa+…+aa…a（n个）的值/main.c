#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,n;
    long sum=0;
    int i;
    int dTemp=0;
    printf("Input a,n:\n");
    scanf("%d,%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        dTemp=dTemp*10+a;
        sum=sum+dTemp;
    }
    printf("sum=%ld\n",sum);
    return 0;
}
