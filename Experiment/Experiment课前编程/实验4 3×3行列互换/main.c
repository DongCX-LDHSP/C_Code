#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

int main()
{
    int a[N][N];
    int b[N][N]={0};///过渡数组
    int i,j;
    ///此循环旨在为数组 a 赋初值，若要检验可
    ///将其连同 种子函数 注释，自行输入数据
    srand(time(NULL));
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            a[i][j]=rand()%100+1;
        }
    }///至此结束
    printf("原行列式如下：\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("行列互换后的行列式如下：\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
