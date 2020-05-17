#include <stdio.h>
#include <stdlib.h>
#define M 4
int main()
{
    int a[M];
    int N=1001,n,m;///n是N的反序数,m是过渡变量
    int i;
    for(;N<=9999;N++)
    {
        m=N;
        for(i=0;i<4;i++)
        {
            a[i]=m%10;
            m=m/10;
        }
        n=a[3]+a[0]*1000+a[1]*100+a[2]*10;
        if(n==9*N)
        {
            printf("%d\n",N);
            break;
        }
    }
    return 0;
}
