///�ö��ַ���һԪ���η��� x^3-x-1=0
///������[-10, 10]��������10^-6 �ĸ�
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define f(x) (x)*(x)*(x)-(x)-1
int main()
{
    float a,b,x0;
    float l,m,n;
    scanf("%f,%f",&a,&b);
    if(f(a)*f(b)<0)
    {
        for(;fabs(f(x0))>=0.000001;)
        {
            x0=(a+b)/2;
            m=f(x0);
            n=f(a);
            l=f(b);
            if(m*n<0)
            {
                b=x0;
            }
            else
            {
                a=x0;
            }
        }
    }
    else
    {
        printf("Input error!");
    }
    printf("x=%6.2f\n",x0);
    return 0;
}
