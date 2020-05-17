#include <stdio.h>
#include <stdlib.h>

double Calculate(double x,double y);
double Calculate(double x,double y)
{
    return 1/((1/x+1/y)/2);
}
int main()
{
    double x,y;
    printf("Input two doubles:\n");
    scanf("%lf%lf",&x,&y);
    printf("1/((1/x+1/y)/2) = %0.3f\n",Calculate(x,y));
    return 0;
}
