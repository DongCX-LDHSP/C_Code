#include <stdio.h>
#include <stdlib.h>
#include  <math.h>
int main()
{
    int a,b,c;
    char ch1,ch2;
    ch2='=';
    srand((unsigned)time(NULL));
    a=rand()%10+1;
    b=rand()%10+1;
    c=rand()%50;
    if((a+b)<=10&&fabs(a-b)>=0)
    {
        switch(c)
        {
            case 0:
                ch1='+';
                break;
            case 1:
                ch1='-';
                break;
            default:
                break;
        }
        printf("%d%c%d%c",a,ch1,b,ch2);
    }
    else
    {
        printf("Please restart the program!");
    }
    return 0;
}
