#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Q 0.0000001

int main()
{
    int i=0;
    float s;
    int n=55;
    do
    {
        s=n;
        for (i=2;i<=5;i++)
        {
            s=s-(s+1)/i;
        }
        if(fabs(s-11)<Q)
        {
            printf("There are %d fishes at first.\n",n);
            break;
        }
        n++;
    }while(1);
    return 0;
}
