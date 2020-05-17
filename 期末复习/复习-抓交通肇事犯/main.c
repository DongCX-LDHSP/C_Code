#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,nNum,Int;
    for(i=1; i<10; i++)
        for(j=0; j<10; j++)
        {
            nNum=(i*10+i)*100+j*10+j;
            for(Int=32; Int<100; Int++)
                if(nNum==Int*Int)
                    printf("³µÅÆºÅÊÇ£º%d",nNum);
        }
    return 0;
}
