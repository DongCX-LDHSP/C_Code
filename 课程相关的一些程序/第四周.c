1£©
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Input a/b, c/d:");
    scanf("%d/%d,%d/%d",&a,&b,&c,&d);
    e=a*d;
    f=c*b;
    if(e>f)
        printf("%d/%d>%d/%d\n",a,b,c,d);
        else if(e==f)
        printf("%d/%d=%d/%d\n",a,b,c,d);
        else
        printf("%d/%d<%d/%d\n",a,b,c,d);
    return 0;
}
2£©
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int year,n;
    double rate,capital;
    char A;
    printf("Input rate, year, capital:");
    scanf("%lf,%d,%lf",&rate,&year,&capital);
    printf("Compound interest (Y/N)?");
    scanf(" %c",&A);
    if(A=='Y'||A=='y')
        {
        printf("deposit = %.4f\n",capital*pow((1+rate),year));
        }
    else if(A=='N'||A=='n')
    {
    printf("deposit = %.4f\n",capital*(1+rate*year));
    }
    return 0;
}

3£©
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    double rate,capital,deposit;
    char A;
    printf("Input capital, year:");
    scanf("%lf,%d",&capital,&n);
    printf("Compound interest (Y/N)?");
    scanf(" %c",&A);
    switch(n)
    {
    case 1:
        rate=0.0225;
        if(A=='Y'||A=='y')
        {
         deposit=capital*pow((1+rate),n);
         printf("rate = %.4f, deposit = %.4f\n",rate,deposit);
        }
        else if(A=='N'||A=='n')
        {
         deposit=capital*(1+rate*n);
         printf("rate = %.4f, deposit = %.4f\n",rate,deposit);
        }
        break;
    case 2:
        rate=0.0243;
        if(A=='Y'||A=='y')
        {
         deposit=capital*pow((1+rate),n);
         printf("rate = %.4f, deposit = %.4f\n",rate,deposit);
        }
        else if(A=='N'||A=='n')
        {
         deposit=capital*(1+rate*n);
         printf("rate = %.4f, deposit = %.4f\n",rate,deposit);
        }
        break;
    case 3:
        rate=0.0270;
        if(A=='Y'||A=='y')
        {
         deposit=capital*pow((1+rate),n);
         printf("rate = %.4f, deposit = %.4f\n",rate,deposit);
        }
        else if(A=='N'||A=='n')
        {
         deposit=capital*(1+rate*n);
         printf("rate = %.4f, deposit = %.4f\n",rate,deposit);
        }
        break;
    case 5:
        rate=0.0288;
        if(A=='Y'||A=='y')
        {
         deposit=capital*pow((1+rate),n);
         printf("rate = %.4f, deposit = %.4f\n",rate,deposit);
        }
        else if(A=='N'||A=='n')
        {
         deposit=capital*(1+rate*n);
         printf("rate = %.4f, deposit = %.4f\n",rate,deposit);
        }
        break;
    case 8:
        rate=0.0300;
        if(A=='Y'||A=='y')
        {
         deposit=capital*pow((1+rate),n);
         printf("rate = %.4f, deposit = %.4f\n",rate,deposit);
        }
        else if(A=='N'||A=='n')
        {
         deposit=capital*(1+rate*n);
         printf("rate = %.4f, deposit = %.4f\n",rate,deposit);
        }
        break;
    default:
        printf("Error year!\n");
        break;
    }
    return 0;
}
4£©
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float A,B,complete,standard;
    printf("Input percent of A and B:");
    scanf("%f%f",&A,&B);
    complete=A*10+B*6;
    standard=A*8+B*10;
    printf("compete = %.4f\nstandard = %.4f\n",complete,standard);
    if(complete>standard)
        printf("The Best Response is compete!");
    else
        printf("The Best Response is standard!");
    return 0;
}
