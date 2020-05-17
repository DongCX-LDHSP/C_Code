#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nNum;
    for(nNum=1;nNum<=100&&nNum>=1;nNum++)
    {
        if(!(nNum%5))
        {
            printf("%d\n",nNum);
        }
    }
    return 0;
}
