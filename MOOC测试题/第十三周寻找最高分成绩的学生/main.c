#include  <stdio.h>
#include  <stdlib.h>
void InputScore(int *p, int m, int n);
int  FindMax(int *p, int m, int n, int *pRow, int *pCol);
int main()
{
    int  *pScore, m, n, maxScore, row, col;
    printf("Input array size m,n:\n");
    scanf("%d,%d", &m, &n);
    pScore=(int *)malloc(m*n*sizeof(int)); /* 申请动态内存 */
    if (pScore == NULL)
    {
        printf("No enough memory!\n");
        exit(0);
    }
    InputScore(pScore,m,n);
    maxScore = FindMax(pScore,m,n,&row,&col);
    printf("maxScore = %d, class = %d, number = %d\n", maxScore, row+1, col+1);
    free(pScore);                                      /* 释放动态内存 */
    return 0;
}

/* 函数功能：输入m行n列二维数组的值 */
void InputScore(int *p, int m, int n)
{
    int i, j;
    printf("Input %d*%d array:\n", m, n);
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d",p+i*n+j);
        }
    }
}
/*  函数功能：计算任意m行n列二维数组中元素的最大值，并指出其所在行列下标值 */
int  FindMax(int *p, int m, int n, int *pRow, int *pCol)
{
    int  i, j, max = p[0];
    *pRow=0;
    *pCol=0;
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            if (p[i*n+j]>max)
            {
                max = p[i*n+j];
                *pRow = i;       /*记录行下标*/
                *pCol = j;             /*记录列下标*/
            }
        }
    }
    return max;
}
