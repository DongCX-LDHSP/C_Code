#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],temp;
    int i,j;
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d",&a[i][j]);
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%3d",a[i][j]);
        printf("\n");
    }
    for(i=0;i<3;i++)
        for(j=i;j<3;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%3d",a[i][j]);
        printf("\n");
    }
    return 0;
}
