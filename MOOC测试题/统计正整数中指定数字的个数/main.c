#include <stdio.h>
#include <stdlib.h>

int CountDigit(int number,int digit);
int CountDigit(int number,int digit)
{
    int a[100];
    int i=-1;
    int j;///判断有几个digit时的循环控制变量
    int count=0;
    int k;///用于给数组赋初值
    for(k=0;k<=99;k++)
    {
        a[k]=10;
    }
    do
    {
        i++;
        a[i]=number%10;
        number=number/10;
    }while(number!=0);///当到达最后一项时，number的值为0
    for(j=0;j<=i;j++)
    {
        if(a[j]==digit)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
int main()
{
    int m,n;
    printf("Input m,n:\n");
    scanf("%d,%d",&m,&n);
    CountDigit(m,n);
    return 0;
}
