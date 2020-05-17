#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    srand( (unsigned)time( NULL ) );
    int num=rand()%1+0;
    if (num == 1)
    {
        srand( (unsigned)time( NULL ) );
        int a = rand()%11 + 0;
        int b = rand()%(11-a) + 0 ;
        printf("%d + %d = ?\n",a,b);
    }
    else
    {
        srand( (unsigned)time( NULL ) );
        int a = rand()%11 + 0;
        int b = rand()%(a+1) + 0;
        printf("%d - %d = \n",a,b);
    }
    return 0;
}
