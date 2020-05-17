#include <stdio.h>
#include <stdlib.h>

long Legendre(int n,int x)
{
    if(n==0)
        return 1;
    if(n==1)
        return x;
    return ((2*n-1)*x*Legendre(n-1,x)-(n-1)*Legendre(n-2,x))/n;
}
int main()
{
    int n,x;
    printf("Input n,x:\n");
    scanf("%d,%d",&n,&x);
    printf("%ld",Legendre(n,x));
    return 0;
}
