#include <stdio.h>
#include <stdlib.h>

void calculateE(double *sum);
void calculateE(double *sum)
{
    int i=1;
    int J=1;
    double c;
    do
    {
        J*=i;
        c=1.0/J;
        if(c>=0.0001)
        {
            *sum+=c;
        }
        i++;
    }while(c>=0.0001);
}
int main()
{
    double e=1.0;
    double *sum=&e;
    calculateE(sum);
    printf("%f",e);
    return 0;
}
