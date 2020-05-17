#include <stdio.h>
#include <stdlib.h>
///220 284  1184 1210   2620 2924
int SumY(int i);
int SumY(int i)
{
    int j;
    int sum=0;
    for(j=1;j<i;j++)
    {
        if(i%j==0)
        {
            sum+=j;
        }
    }
    return sum;
}
int main()
{
    int n;
    int i;///待判断数据
    int a;///存储i的因子和
    int b;///存储i的因子和的因子和
    int c=0,d=0;///暂时存储亲密数对
    printf("Input n:\n");
    scanf("%d",&n);
    printf("亲密数对有：\n");
    for(i=1;i<=n;i++)
    {
        a=SumY(i);
        b=SumY(a);
        if(i!=a)
        {
            if(i==b)
            {
                if(i!=d&&c!=a)
                {
                    printf(" %d 和 %d\n",i,a);
                    c=i;d=a;
                }
            }
        }
    }
    return 0;
}
