#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int a;
    int flag=0;
    for(n=0;;n++)
    {
        if(n%8==1&&(n/8)%8==1&&(n/8)/8%8==7)
        {
            a=(n/8)/8/8;
            flag=1;
        }
        if(flag==1)
        {
            if(n%17==4&&n/17%17==15&&n/17/17==2*a)
            {
                printf("%d\n",n);
                break;
            }
        }
    }
    return 0;
}
