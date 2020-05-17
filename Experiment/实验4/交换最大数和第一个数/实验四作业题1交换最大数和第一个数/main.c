#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a[3][4];
    int i,j;
    int nMaxvalue,nRpos,nCpos;
    srand(time(0));
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            a[i][j]=rand()%100+1;
        }
    }
    printf("The original martix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        nMaxvalue=a[i][0];
        nRpos=i;
        nCpos=0;
        for(j=0;j<4;j++)
        {
            if(a[i][j]>nMaxvalue)
            {
                nMaxvalue=a[i][j];
                nRpos=i;
                nCpos=j;
            }
        }
        a[nRpos][nCpos]=a[i][0];
        a[i][0]=nMaxvalue;
    }
    printf("The changed martix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
