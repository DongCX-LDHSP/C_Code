#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,A,B,C,i;
    scanf("%d",&n);
    for(i=100;i<=n;i++)
    {
        A=i/100;
        B=(i-A*100)/10;
        C=i%10;
        if(A*A*A+B*B*B+C*C*C==i)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
