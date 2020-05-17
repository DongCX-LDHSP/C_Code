#include <stdio.h>
#include <stdlib.h>

int JS(int a[3][3]);
int JS(int a[3][3])
{
    int i,sum=0;
    for(i=0;i<3;i++)
    {
        sum+=a[i][i];
    }
    return sum;
}
int main()
{
    int a[3][3],R;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    R=JS(a);
    printf("%d\n",R);
    return 0;
}
