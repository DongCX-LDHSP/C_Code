#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    int i;
    int summ=0,sumn=0;
    printf("Input m, n:\n");
    scanf("%d,%d",&m,&n);
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        {
            summ+=i;
        }
    }
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sumn+=i;
        }
    }
    if(summ==n&&sumn==m)
    {
        printf("Yes!\n");
    }
    else
    {
        printf("No!\n");
    }
    return 0;
}
