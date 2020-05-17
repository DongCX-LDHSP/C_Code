#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float get_float();
int make_change(float dollar);

int main()
{
	float dollar;
	int coins;
	dollar = get_float();
	coins = make_change(dollar);
	printf("You need %d coins",coins);
}

float get_float()
{
    float cash;
    char num[10] = "";
    int invalid;
    do
    {
        invalid = 1;
        printf("Input the cash:");
        scanf("%s", num);
        for(int i = 0; num[i] != '\0'; i++)
            if(!((num[i] >= '0' && num[i] <= '9') || num[i] == '.'))
            {
                invalid = 0;
                break;
            }
        if(num[0] == '-')
            invalid = 0;
    }while(!invalid);
    cash = atof(num);
    return cash;
}

int make_change(float s)
{
    int coins = round(s * 100);
    int a, b, c, d, e, f;
    a = coins / 25;
    b = coins % 25;
    c = b / 10;
    d = b % 10;
    e = d / 5;
    f = d % 5;
    return (a + c + e + f);
}
