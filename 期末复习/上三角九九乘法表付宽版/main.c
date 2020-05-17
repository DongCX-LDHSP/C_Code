#include <stdio.h>
int main(void)
{
    int r,c,i;
    for(r = 1;r<=9;r++)
    {
        i=1;
        while(i<r)
        {
            printf("    ");
            i=i+1;
        }
        for(c = r;c<= 9;c++)
        {
            printf("%4d",c*r);
        }
        putchar('\n');
    }
}
