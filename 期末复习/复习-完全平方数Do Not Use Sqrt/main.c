#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=-99,j;
    for(;i<=10000;i++)
    {
        for(j=1;j*j!=i+100&&j*j<i+100;j++);
        if(j*j==i+100)
        {
            for(;j*j!=i+268&&j*j<i+268;j++);
            if(j*j==i+268)
                printf("%d\n",i);
        }
    }
    return 0;
}
