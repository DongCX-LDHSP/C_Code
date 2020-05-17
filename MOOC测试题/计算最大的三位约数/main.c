#include <stdio.h>
#include <stdlib.h>
int Func(int n);
int Func(int n)
{
    int i,j;//j用于存储合适的三位数，i是递增变量
    for(i=100;i<=999;i++)
    {
        if(n%i==0)
        {
            j=i;
        }
    }
    return j;
}
int main()
{
    int n,nYue;
    printf("Input n:");
    scanf("%d",&n);
    if(n>=1000&&n<=1000000)
    {
        nYue=Func(n);
        printf("%d\n",nYue);
    }
    else
    {
        printf("Input error!\n");
    }
    return 0;
}
