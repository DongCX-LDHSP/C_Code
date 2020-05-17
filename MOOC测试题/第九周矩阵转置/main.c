#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int a[N][N];
    int b[N][N];
    int n;
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=i*n+j+1;
        }
    }
    printf("The original matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("The changed matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%3d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
