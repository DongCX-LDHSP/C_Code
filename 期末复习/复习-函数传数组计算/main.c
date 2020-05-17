#include <stdio.h>
#include <stdlib.h>

int Cal_Horn(int a[][3])
{
    int i,sum=0;
    for(i=0;i<3;i++)
        sum+=a[i][i];
    return sum;
}
int main()
{
    int a[3][3],i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("Sum of the diagonal line = %d",Cal_Horn(a));
    return 0;
}
