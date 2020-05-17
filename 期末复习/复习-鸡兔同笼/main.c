#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chicken,rabbit;
    for(chicken=1;chicken<=35;chicken++)
    {
        rabbit=35-chicken;
        if(2*chicken+4*rabbit==94)
            printf("chicken=%d,rabbit=%d\n",chicken,rabbit);
    }
    return 0;
}
