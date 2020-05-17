#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,m,x,y;
    double i;
    for(i=-99;i<=65535;i++)
    {
        n=sqrt(i+100);
        m=sqrt(i+268);
        x=n*n;
        y=m*m;
        if(x==(i+100)&&y==(i+268))
        {
            printf("%d\n",(int)i);
        }
    }
    return 0;
}
