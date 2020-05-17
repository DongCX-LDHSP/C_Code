#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int IsPrime(int x);
int IsPrime(int x)
{
    int counter;
    if(x==1)
    {
        return 0;
    }
    else
    {
        for(counter=2;counter<x;counter++)
        {
            if(x%counter==0)
            {
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int n,i,sum=0;
    int A;//用于存储返回值
    printf("Input n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        A=IsPrime(i);
        if(A==0)
        {
             ;
        }
        else
        {
            sum+=i;
        }
    }
    printf("sum=%d\n",sum);
    return 0;
}
