#include <stdio.h>
#define M 10
#define N 10
void Transpose(int *a, int *at, int m, int n);
void InputMatrix(int *a, int m, int n);
void PrintMatrix(int *at, int n, int m);
int main()
{
    int s[M][N], st[N][M], m, n;
    printf("Input m, n:\n");
    scanf("%d,%d", &m, &n);
    InputMatrix( *s, m, n);
    Transpose( *s, *st, m, n);
    printf("The transposed matrix is:\n");
    PrintMatrix(*st, n,  m);
    return 0;
}
/* 函数功能：计算m*n矩阵a的转置矩阵at */
void Transpose(int *a, int *at, int m, int n)
{
    int i, j;
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            *(at+j*M+i) = *(a+i*N+j);
        }
    }
}
/* 函数功能：输入m*n矩阵a的值 */
void InputMatrix(int *a, int m, int n)
{
    int i, j;
    printf("Input %d*%d matrix:\n", m, n);
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d", a+i*N+j);
        }
    }
}
/* 函数功能：输出n*m矩阵at的值 */
void PrintMatrix(int *at, int n, int m)
{
    int i, j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf("%-5d", *(at+i*M+j));
        }
        printf("\n");
    }
}
