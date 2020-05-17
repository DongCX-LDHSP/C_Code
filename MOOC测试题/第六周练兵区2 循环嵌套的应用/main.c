#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a='F';
    int i,j,k,m,n;
    n=a-64;
    for(i=1,j=1;i<=n;i++,j++)
    {
        for(k=0;k<=j-1;k++)
        {
            m=a-k;
            printf("%c",m);
        }
        printf("\n");
    }
    return 0;
}
