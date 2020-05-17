#include <stdio.h>
#include <stdlib.h>

int JC(int x);
int JC(int x)
{
    if(x==0||x==1)
    {
        return 1;
    }
    else
    {
        return x*JC(x-1);
    }
}
int main()
{
    int i;
    int a,b,c;
    long int sum;
    for(i=100;i<1000;i++)
    {
        a=i/100;
        b=(i-a*100)/10;
        c=i%10;
        sum=JC(a)+JC(b)+JC(c);
        if(sum==i)
            printf("%ld\n",sum);
    }
    return 0;
}
