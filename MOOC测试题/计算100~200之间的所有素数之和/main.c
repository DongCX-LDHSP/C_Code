#include <stdio.h>
#include <stdlib.h>

int fun(int m);
int fun(int m)
{
    int i;
    for(i=2;i<m;i++)
    {
        if(m%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a;
    int j;
    int sum=0;
    for(a=100;a<=200;a++)
    {
        j=fun(a);
        if(j==1)
        {
            sum+=a;
        }
    }
    printf("sum=%d\n",sum);
    return 0;
}
