#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,a;
    for(i=1;i<=7;i+=2)
    {
        for(a=1;a<=(7-i);a++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }
    int n,m,b;
    for(n=5;n>=1;n-=2)
    {
        for(b=1;b<=7-n;b++)
            printf(" ");
        for(m=1;m<=n;m++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
