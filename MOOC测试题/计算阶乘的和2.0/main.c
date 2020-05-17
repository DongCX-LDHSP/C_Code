#include <stdio.h>
#include <stdlib.h>
long Fact(int n);
long Fact(int n)
{
    int result=1;
    if(n==0)
    {
        return 1;
    }
    else
    {
        for(;n>=1;n--)
        {
            result*=n;
        }
        return result;
    }
}
int main()
{
    int m,a,b,c;
    int d,e,f;//用于存储a,b,c的阶乘值
    for(m=100;m<=999;m++)
    {
        a=m/100;
        b=(m-a*100)/10;
        c=m%10;
        d=Fact(a);
        e=Fact(b);
        f=Fact(c);
        if(m==d+e+f)
        {
            printf("%d\n",m);
        }
    }
    return 0;
}
