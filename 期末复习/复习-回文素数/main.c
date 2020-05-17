#include <stdio.h>
#include <stdlib.h>

int IsPrime(int m)
{
    for(int i=2; i<=m/2; i++)
        if(m%i==0)
            return 0;
    return 1;
}
int IsPrime_Back(int n)
{
    int i=0,*p,nTemp,nBack=0;
    if(IsPrime(n))
    {
        for(nTemp=n; nTemp!=0; i++)
            nTemp/=10;
        p=calloc(i,sizeof(int ));
        for(int j=0,nTemp=n; nTemp!=0; j++)
        {
            p[j]=nTemp%10;
            nTemp=nTemp/10;
        }
        for(int j=0;j<i;j++)
            nBack=nBack*10+p[j];
        free(p);
        if(nBack==n)
            return 1;
    }
    return 0;
}
int main()
{
    int n;
    for(n=1;n<=1000;n++)
        if(IsPrime_Back(n))
            printf("%d\n",n);
    return 0;
}
