#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i,j;
    double fValue;
    printf("Input n(n<=10):\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%7d",i);
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",i);
        for(j=0;j<n;j++)
        {
            fValue=sqrt(i*10+j);
            printf("%7.3f",fValue);
        }
    }
    return 0;
}
