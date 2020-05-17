#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1,nDays;
    printf("Input days:\n");
    scanf("%d",&nDays);
    for(;nDays>=1;nDays--)
    {
        x=2*(x+1);
    }
    x=x/2-1;
    printf("x=%d\n",x);
    return 0;
}
