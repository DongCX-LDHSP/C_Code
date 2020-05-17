#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,p;
    for(m=1;m<=9;m++)
    {
        n=1;
        while(n<m)
        {
            printf("    ");
            n++;
        }
        for(p=0;n<=9;n++)
        {
            p=m*n;
            printf("%4d",p);
        }
        printf("\n");
    }
    return 0;
}
