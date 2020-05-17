#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int k=1;
    double x,dSin=0,dTemp;
    double JQD=0.000001;
    printf("Input x:\n");//ÇëÊäÈë»¡¶ÈÖÆ
    scanf("%lf",&x);
    dTemp=x;
    while(fabs(dTemp)>=JQD)
    {
        dSin=dSin+dTemp;
        k++;
        dTemp=(-1)*dTemp*((x*x)/((2*k-1)*2*(k-1)));
    }
    printf("sin(x)=%.3f,count=%d\n",dSin,k-1);
    return 0;
}
