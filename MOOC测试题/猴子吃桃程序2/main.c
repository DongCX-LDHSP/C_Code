#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x=1,days,c;
    do{
        printf("Input days:\n");
        c=scanf("%d",&days);
        //
        printf("%d",c);
        if(c==1)
        {
            for(;days>=1;days--)
            {
                x=2*(x+1);
                //printf("%d",x);
            }
        }
        else
        {
            while(getchar()!='\n');
        }
    }while(c!=1||days<=0);
    x=x/2-1;
    printf("x=%d\n",x);
    return 0;
}

