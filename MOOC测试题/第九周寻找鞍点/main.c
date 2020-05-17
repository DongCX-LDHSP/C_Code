#include <stdio.h>
#include <stdlib.h>
#define N 100
void FindSaddlePoint(int a[][N], int m, int n);
void FindSaddlePoint(int a[][N], int m, int n)
{
    int i,j,k;
    int max_min;
    int nRpos,nCpos;
    int flag=1;
    int output=1;
    for(i=0;i<m;i++)
    {
        flag=1;
        max_min=a[i][0];
        nRpos=i;
        nCpos=0;
        for(j=0;j<n;j++)///寻找行最大
        {
            if(a[i][j]>max_min)
            {
                max_min=a[i][j];
                nRpos=i;
                nCpos=j;
            }
        }
        for(k=0;k<m;k++)///判断是否是列最小
        {
            if(a[k][nCpos]<max_min)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            printf("a[%d][%d] is %d\n",nRpos,nCpos,a[nRpos][nCpos]);
            output=0;
        }
    }
    if(output)
    {
        printf("No saddle point!\n");
    }
}
int main()
{
    int a[N][N];
    int m,n;
    int i,j;
    printf("Input m,n:\n");
    scanf("%d,%d",&m,&n);
    printf("Input matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    FindSaddlePoint(a,m,n);
    return 0;
}
