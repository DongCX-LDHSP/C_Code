#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c;
    char ch1,ch2;
    ch2='=';
    srand(time(0));
    a=rand()%10;
    b=rand()%10;
    c=rand()%50;
    c=c%2;
    switch(c)
    {
        case 0:
            ch1='+';
            break;
        case 1:
            ch1='-';
            break;
    }
    printf("%d%c%d%c",a,ch1,b,ch2);
    return 0;
}
