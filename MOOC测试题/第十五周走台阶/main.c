#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stair[10],i;
    stair[0]=1;
    stair[1]=2;
    for(i=2;i<10;i++)
    {
        stair[i]=stair[i-1]+stair[i-2];
    }
    printf("Result=%d",stair[9]);
    return 0;
}
