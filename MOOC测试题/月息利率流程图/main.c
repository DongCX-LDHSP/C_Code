#include <stdio.h>
#include <stdlib.h>


int main()
{
    int year;
    float rate,deposit,capital;
    printf("Please input the year and the capital!\n");
    scanf("%d%f",&year,&capital);
    switch(year)
    {
    case 1:
        rate=0.0063;
        break;
    case 2:
        rate=0.0066;
        break;
    case 3:
        rate=0.0069;
        break;
    case 5:
        rate=0.0075;
        break;
    case 8:
        rate=0.0084;
        break;
    default:
        printf("Error year!");
        return 0;
        break;
    }
    deposit=capital*rate*12*year+capital;
    printf("%f",deposit);
    return 0;
}
