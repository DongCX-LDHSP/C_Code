#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    typedef union divise
    {
        unsigned long get;
        char a_b[sizeof(unsigned long)/2];
    }APART;
    APART u;
    scanf("%lu",&u.get);
    printf("%d,%d",u.a_b[0],u.a_b[1]);
    return 0;
}
