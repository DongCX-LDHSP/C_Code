#include <stdio.h>

int Max_Common_Divisor(int m,int n)
{
    int nRemainder;
    do
    {
        nRemainder=m%n;
        m=n;
        n=nRemainder;
    }while(nRemainder!=0);
    return m;
}
int main()
{
    int m,n;
    printf("Input m,n:\n");
    scanf("%d,%d",&m,&n);
    printf("%d",Max_Common_Divisor(m,n));
    return 0;
}
