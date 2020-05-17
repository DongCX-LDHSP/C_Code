#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,j,n;
    double Q=2.0;
    int count=0;
    int flag=1;
    printf("Input n:\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        flag=1;
        Q=Q*2.0;
        for(j=2;j<=sqrt(Q-1);j++)
        {
            if((Q-1)/j==(int)((Q-1)/j))
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            printf("2^%d-1=%.0lf\n",i,Q-1);
            count++;
        }
    }
    printf("count=%d\n",count);
    return 0;
}
