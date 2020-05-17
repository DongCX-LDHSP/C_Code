#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0,j=1;i<4;i++,j+=2)
    {
        for(int m=(7-j)/2,k=0;k<m;k++)
            printf(" ");
        for(int k=1;k<=j;k++)
            printf("*");
        printf("\n");
    }
    for(int i=0,j=5;i<3;i++,j-=2)
    {
        for(int m=(7-j)/2,k=0;k<m;k++)
            printf(" ");
        for(int k=1;k<=j;k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
