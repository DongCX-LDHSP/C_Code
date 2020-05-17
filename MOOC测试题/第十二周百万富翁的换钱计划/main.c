#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double sumS=0,sumR=0;
    int i;
    for(i=0;i<30;i++)
        sumS+=100000;
    for(i=0;i<30;i++)
        sumR+=pow(2,i)/100.0;
    printf("to Stranger: %.2f yuan\n",sumR);
    printf("to Richman: %.2f yuan\n",sumS);
    return 0;
}
