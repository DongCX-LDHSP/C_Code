#include <stdio.h>
#include <stdlib.h>

int main()
{
    int man,women,child;
    printf("¹«¼¦  Ä¸¼¦  Ð¡¼¦\n");
    for(man=0;man<=20;man++)
    {
        for(women=0;women<=33;women++)
        {
            for(child=0;child<=100;child++)
            {
                if(man+women+child==100&&15*man+9*women+child==300)
                {
                    printf("%4d%6d%6d\n",man,women,child);
                }
            }
        }
    }
    return 0;
}
