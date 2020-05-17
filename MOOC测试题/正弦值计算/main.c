#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int k=1;
    double x,dSin=0,dTemp;
    double JQD=0.000001;
    printf("Please input x:");
    scanf("%lf",&x);
    dTemp=x;
    while(fabs(dTemp)>=JQD)
    {
        dSin+=dTemp;
        k++;
        dTemp=(-1)*dTemp*((x*x)/((2*k-1)*2*(k-1)));
    }
    printf("sin(%f)=%f",x,dSin);
    return 0;
}
