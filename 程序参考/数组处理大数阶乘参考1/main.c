#include <stdio.h>
#include <stdlib.h>
void setArray(int a[],int n);//将数组中的原始初始化为-1
void calFactorial(int a[],int len,int n);//算阶乘，参数为数组、数组长度和要计算的阶乘
void getFactorial(int a[],int n);//输出阶乘的值
void setArray(int a[],int n)
{
    for(int i=0;i<n;i++)a[i]=-1;
}
void calFactorial(int a[],int len,int n)
{
    if(n==0||n==1)
        a[len-1]=1;
    else
    {
        a[len-1]=1;
        int product,k=0,flag=-1;//product存放某个位上的数跟相乘的数的结果，flag存放进位要加的值
        for(int i=2;i<=n;i++)
        {
            for(int j=len-1;a[j]!=-1||flag!=0;j--)//只有当当前位置上存在有效数且进位符为0时才退出
            {
                if(k==0)
                    flag=0;//因为flag
                if(a[j]!=-1)
                {
                    product=a[j]*i;
                }
                else
                {
                    product=0;//无有效数但需要加上进位数，先将值置为0
                }
                if(product>=10)
                {
                    a[j]=product%10+flag%10;//用乘积个位上的数+进位个位上的数
                    flag=flag/10+product/10;//个位上的数已完成进位，将flag/10,然后加上新的需要进位的数
                    if(a[j]>=10)
                    {
                        a[j]=a[j]%10;//取个位
                        flag+=1;//由于进位数和乘积个位上的数和不可能超过20，所以只需要给flag+1，进位到下一位
                    }
                }
                else
                {
                    a[j]=product+flag%10;//无需向下位进位的，直接将乘积和进位数相加
                    flag/=10;
                }
                k++;
            }
            flag=-1;
            k=0;
        }
    }
}
void getFactorial(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=-1)
            printf("%d",a[i]);
    }
}
int main()
{
    int a[50]={0};
    setArray(a,50);
    calFactorial(a,50,40);
    getFactorial(a,50);
    return 0;
}
