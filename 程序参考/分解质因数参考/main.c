#include <stdlib.h>
#include <stdio.h>
int main()
{
    int x,n,a;
    printf("Input data:");
    scanf("%d",&x);
    printf("%d=",x);
    for(n=2;n<x;n++)
    {
        a=x%n;
        if(a==0)
        {
            x=x/n;
            printf("%d*",n);
            n=1;
        }
    }
    printf("%d",x);
    return 0;

}
