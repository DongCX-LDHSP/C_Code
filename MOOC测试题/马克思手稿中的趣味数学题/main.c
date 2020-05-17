#include <stdio.h>
#include <stdlib.h>

int main()
{
    int man,women,children;
    printf("Man   Women   Children\n");
    for(man=0;man<=16;man++)
    {
        for(women=0;women<=25;women++)
        {
            for(children=0;children<=50;children++)
            {
                if(man+women+children==30&&3*man+2*women+1*children==50)
                {
                    printf("%3d%8d%8d\n",man,women,children);
                }
            }
        }
    }
    return 0;
}
