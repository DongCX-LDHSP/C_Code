#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Y(double x, int n);
double Y(double x, int n)
{
    if(n==0)
        return 0;
    else
        return (sqrt(x+Y(x,n-1)));
}
int main()
{
    double x;
    int n;
    printf("Please input x and n:");
    scanf("%lf,%d",&x,&n);
    printf("Result=%.2f\n",Y(x,n));
    return 0;
}
