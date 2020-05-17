#include <stdio.h>
int main()
{
    int i,j;
    for (i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            putchar(' ');
        }
        for(j=1;j<=2*i-1;j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
        for (i=3;i>=1;i--)
        {
        for(j=1;j<=4-i;j++)
        {
            putchar(' ');
        }
        for(j=1;j<=2*i-1;j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
