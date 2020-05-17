#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,count=0,sum=0;
    do
    {
        printf("Input a number:\n");
        scanf("%d",&n);
        if(n>0)
        {
            sum+=n;
            count++;
        }
    }while(n!=0);
    printf("sum=%d,count=%d\n",sum,count);
    return 0;
}
