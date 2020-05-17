#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int k=0;
    double x,dCos=0,dTemp=1.0;
    double JQD=0.000001;
    printf("Please input x:");
    scanf("%lf",&x);
    while(fabs(dTemp)>=JQD)
    {
        dCos+=dTemp;
        k++;
        dTemp=(-1)*dTemp*((x*x)/((2*k-1)*2*k));
    }
    printf("cos(%f)=%f",x,dCos);
    return 0;
}
