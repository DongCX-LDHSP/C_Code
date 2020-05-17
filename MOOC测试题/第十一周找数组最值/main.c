#include <stdio.h>
#include <stdlib.h>
#define M 10
#define N 10

void InputArray(int *p,int m,int n);
int  FindMax(int *p,int m,int n,int *pRow,int *pCol);
void InputArray(int *p,int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",(p+n*i+j));
}
int  FindMax(int *p,int m,int n,int *pRow,int *pCol)
{
    int i,j,max=*p;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            if(max<*(p+i*n+j))
            {
                max=*(p+i*n+j);
                *pRow=i;
                *pCol=j;
            }
        }
    return max;
}
int main()
{
    int m,n;
    int Row=0,Col=0,max;
    int array[M][N];
    printf("Input m,n:\n");
    scanf("%d,%d",&m,&n);
    printf("Input %d*%d array:\n",m,n);
    InputArray(array,m,n);
    max=FindMax(array,m,n,&Row,&Col);
    printf("max=%d,row=%d,col=%d\n",max,Row,Col);
    return 0;
}
