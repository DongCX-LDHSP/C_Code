///哥德巴赫猜想：任一大于2的偶数都可写成两个质数之和。
///程序功能：验证1000以内的偶数都能分解成两个素数的和
#include <stdio.h>
#include <stdlib.h>

int IfPrime(int i);
int IfPrime(int i)
{
    int j;
    int flag=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            flag=1;
        }
    }
    return flag;
}
int main()
{
    int i;///存储第1个素数
    int n;
    int flag1,flag2;
    int sum=0;///记录满足条件的偶数的个数
    for(n=4;n<=1000;n++)
    {
        if(n%2==0)
        {   for(i=2;i<n;i++)
            {
                flag1=IfPrime(i);
                if(flag1==0)
                {
                    flag2=IfPrime(n-i);
                    if(flag2==0)
                    {
                        sum++;
                        break;
                    }
                }
            }
        }
    }
    if(sum==499)
    {
        printf("命题得证！");
    }
    else
    {
        printf("命题不成立！");
    }
    return 0;
}
