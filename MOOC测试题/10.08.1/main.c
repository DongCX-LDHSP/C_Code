#include <stdio.h>

#include <math.h>



int main()

{

    float deposit;

    double rate,capital;

    int year;char a;

    printf("Input rate, year, capital:");

    scanf("%lf,%d,%lf",&rate,&year,&capital);

    printf("Compound interest (Y/N)?");

    scanf(" %c",&a);

    if (a==89||a==121)

    {deposit = capital*pow(1+rate,year);

    printf("deposit = %.4f\n",deposit);}

    if (a==78||a==110)

    {

        deposit=capital*(1+rate*year);

        printf("deposit = %.4f\n",deposit);

    }

    return 0;

}
