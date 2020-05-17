#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int a[4];
    int i;
    int G;///¹ı¶É±äÁ¿
    for(n=1000;n<=9999;n++)
    {
        G=n;
        for(i=0;i<4;i++)
        {
            a[i]=G%10;
            G=G/10;
        }
        if(a[0]*a[0]*a[0]*a[0]+a[1]*a[1]*a[1]*a[1]+
           a[2]*a[2]*a[2]*a[2]+a[3]*a[3]*a[3]*a[3]==n)
        {
            printf("%d\n",n);
        }
    }
    return 0;
}
