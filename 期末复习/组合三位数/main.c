#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int i;
    int a,b,c;
    for(i=0;i<10;i++)
    {
        a[i]=i;
    }

    return 0;
}

///两种方法
/*四个结果
#include<stdio.h>
int a[10];
void f(int n)
{
    while (n)
    {
        ++a[n % 10];
        n /= 10;
    }
}
int main()
{
    int n,i,r;
    for (n = 100; n < 400;++n)
    {
        for (i = 1; i <= 9; ++i)
            a[i] = 0;
        f(n);
        f(2 * n);
        f(3 * n);
        r = 1;
        for (i = 1; i <= 9; ++i)
            r *= a[i];
        if (r == 1)
            printf("%d,%d,%d\n", n, 2 * n, 3 * n);
    }
    return 0;
}
*/



/*五个结果
#include<stdio.h>
int judge(int n);
int a[10]={0};
int main()
{
    int i,j,z,n1,n2,n3,k;
    for(i=123;i<333;i++)
    {
        if(judge(i)&&judge(i*2)&&judge(i*3))
        printf("%d,%d,%d\n",i,i*2,i*3);
        for(k=0;k<10;k++)
        a[k]=0;
    }
}
int judge(int n)
{
    a[n%10]++;
    a[n/10%10]++;
    a[n/100]++;
    if(a[n%10]>=2||a[n/10%10]>=2||a[n/100]>=2)
        return 0;
        return 1;
}
*/

