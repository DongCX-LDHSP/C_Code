#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i,j;
    int c,d;
    int e,f;
    int a[100][100];
    int b[100][100];
    printf("Input n:");
    scanf("%d",&n);
    printf("Input %d*%d matrix:\n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(c=0;c<n;c++)
    {
        for(d=0;d<n;d++)
        {
            b[d][c]=a[c][d];
        }
    }
    printf("The transposed matrix is:\n");
    for(e=0;e<n;e++)
    {
        for(f=0;f<n;f++)
        {
            printf("%4d",b[e][f]);
        }
        printf("\n");
    }
    return 0;
}
