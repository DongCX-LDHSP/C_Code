#include <stdio.h>
#include <stdlib.h>

void IfBack(int n,int x);
void IfPrime(int n);
void IfBack(int n,int x)
{
    int p,q;
    int a,b,c;
    switch(x)
    {
    case 1:
        p=n/10;
        q=n%10;
        if(q*10+p==n)
            IfPrime(n);
        break;
    case 2:
        a=n/100;
        b=(n-a*100)/10;
        c=n%10;
        if(c*100+b*10+a==n)
            IfPrime(n);
        break;
    }
}
void IfPrime(int n)
{
    int i;
    int flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
    }
    if(flag==0)
        printf("%d\n",n);
}
int main()
{
    int n;
    int x;
    for(n=11;n<=1000;n++)
    {
        if(n>=11&&n<=99)
        {
            x=1;
            IfBack(n,x);
        }
        else
        {
            x=2;
            IfBack(n,x);
        }
    }
    return 0;
}
