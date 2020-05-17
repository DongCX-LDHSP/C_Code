#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double n,sum;
    float i;
    int m=1;
    printf("Input n:\n");
    scanf("%lf",&n);
    do
    {
        sum=0;
        for(i=0;i<=m;i++)
        {
            sum+=sqrt(m+i);
        }
        m++;
    }while(sum<=n);
    printf("Result:m>=%d\n",m-1);
    printf("s=%.2f\n",sum);
    return 0;
}
