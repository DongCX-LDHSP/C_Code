#include <stdio.h>
#include <stdlib.h>
#define N 20

int CommonFactors(int a, int b);
int CommonFactors(int a, int b)
{
    int i=0,count=0,flag=0;
    for(i=a>b?b:a;i>0;i--)
    {
        if(a%i==0&&b%i==0)
        {
            count++;
            printf("Common factor %d is %d\n",count,i);
            flag=1;
        }
    }
    if(flag)
        return 0;
    else
        return -1;
}
int main()
{
    int a,b;
    printf("Input a and b:\n");
    scanf("%d,%d",&a,&b);
    if(a>0&&b>0)
    {
        CommonFactors(a,b);
    }
    return 0;
}
