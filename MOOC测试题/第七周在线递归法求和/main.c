#include <stdio.h>
#include <stdlib.h>

int Sum(int n);
int Sum(int n)
{
    if(n==1)
        return 1;
    else
        return n+Sum(n-1);
}
int main()
{
    int n,sum;
    printf("Please input n:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("data error!\n");
    }
    else
    {
        sum=Sum(n);
        printf("sum=%d\n",sum);
    }
    return 0;
}
