#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int men,women,children;
    int n;
    printf("Input n(27<n<=77):\n");
    scanf("%d",&n);
    for(men=0;men<=floor(n/4);men++)
    {
        for(women=0;women<=floor(n/3);women++)
        {
            for(children=0;children<=n;children++)
            {
                if(8*men+6*women+children==2*n&&men+women+children==36)
                {
                    printf("men=%d,women=%d,children=%d\n",men,women,children);
                }
            }
        }
    }
    return 0;
}
