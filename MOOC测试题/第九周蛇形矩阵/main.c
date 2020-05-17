#include <stdio.h>
#include <stdlib.h>
#define N 100

void ZigzagMatrix(int a[][N], int n);
void ZigzagMatrix(int a[][N], int n)
{
    int i,j;
    int s;
    int count=1;
    int countout=0;
    a[0][0]=1;
    for(i=0,s=1;s<n;s++)
    {
        if(s%2==1)
        {
            for(j=s;j>=0;j--)
            {
                count++;
                i=s-j;
                a[i][j]=count;
            }
        }
        else
        {
            for(i=s;i>=0;i--)
            {
                count++;
                j=s-i;
                a[i][j]=count;
            }
        }
    }
    if((s-1)%2==1)
        j++;
    else
        i++;
    for(;s<2*n-1;s++)///在此解决下三角
    {
        countout++;
        if(s%2==1)
        {
            for(i++;j>countout;i++)
            {
                count++;
                j=s-i;
                a[i][j]=count;
            }
        }
        else
        {
            for(j++;i>countout;j++)
            {
                count++;
                i=s-j;
                a[i][j]=count;
            }
        }
    }
}
int main()
{
    int n;
    int a[N][N]={0};
    int R;
    int i,j;
    int flag=1;
    printf("Input n:\n");
    R=scanf("%d",&n);
    if(!(R==1&&n>=1&&n<=100))
    {
        printf("Input error!\n");
        flag=0;
    }
    else
    {
        ZigzagMatrix(a,n);
    }
    if(flag)
    {   for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%4d",a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
