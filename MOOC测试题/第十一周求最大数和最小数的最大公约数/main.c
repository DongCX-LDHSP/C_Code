#include <stdio.h>
#include <stdlib.h>
#define N 10
int GY(int m,int n);
int GY(int m,int n)
{
    int i;
    i=m>n?n:m;
    for(;i>1;i--)
    {
        if(m%i==0&&n%i==0)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[N],i;
    int maxNum,minNum,R;
    printf("Input 10 numbers:\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    maxNum=a[0];
    for(i=0;i<N;i++)
    {
        if(a[i]>maxNum)
        {
            maxNum=a[i];
        }
    }
    minNum=a[0];
    for(i=0;i<N;i++)
    {
        if(a[i]<minNum)
        {
            minNum=a[i];
        }
    }
    printf("maxNum=%d\n",maxNum);
    printf("minNum=%d\n",minNum);
    if(maxNum>0&&minNum>0)
    {
        R=GY(maxNum,minNum);
        printf("%d",R);
    }
    return 0;
}
