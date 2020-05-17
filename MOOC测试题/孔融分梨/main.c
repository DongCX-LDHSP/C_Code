#include <stdio.h>
#include <stdlib.h>
int Gcd(int a, int b);
int Gcd(int a, int b)
{
    int g,r=1;
    if(a>=1&&b<=10000&&b>=1)
    {
        if(a<b)
        {
            for(;r!=0;)
            {
                r=b%a;
                b=a;
                a=r;
            }
            g=b;
        }
        else
        {
            for(;r!=0;)
            {
                r=a%b;
                a=b;
                b=r;
            }
            g=a;
        }
        return g;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int m,n;//m是分子,n是分母
    int nGcd;
    printf("Input m,n:");
    scanf("%d,%d",&m,&n);
    nGcd=Gcd(m,n);
    if(nGcd==-1)
    {
        printf("Input error!\n");
    }
    else
    {
        m=m/nGcd;
        n=n/nGcd;
        printf("%d/%d\n",m,n);
    }
    return 0;
}
