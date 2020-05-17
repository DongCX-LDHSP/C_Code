#include <stdio.h>
#include <stdlib.h>

int Legendre_Polynomials(int n,int x);
int Legendre_Polynomials(int n,int x)
{
    if(n==0)
        return 1;
    else if(n==1)
        return x;
    else
        return ((2*n-1)*x*Legendre_Polynomials(n-1,x)-(n-1)*Legendre_Polynomials(n-2,x))/n;
}
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    printf("%d\n",Legendre_Polynomials(n,x));
    return 0;
}
