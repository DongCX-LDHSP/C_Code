#include <stdio.h>
#include <stdlib.h>

int main()
{
    float payment;
    printf("Input payment:");
    scanf("%f",&payment);
    if(payment<100)
        printf("price = %.1f\n",payment);
    if(payment>=100&&payment<200)
        printf("price = %.1f\n",payment*(1-0.05));
    if(payment>=200&&payment<500)
        printf("price = %.1f\n",payment*(1-0.08));
    if(payment>=500&&payment<1000)
        printf("price = %.1f\n",payment*(1-0.1));
    if(payment>=1000)
        printf("price = %.1f\n",payment*(1-0.15));
    return 0;
}
