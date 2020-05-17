#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int flag;
    int sum=0;
    int count=0;
    printf("Input n(n<=500):");
    scanf("%d",&n);
    for(;n>=2;n--)
    {
        flag=1;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }
        if(count<=9)
        {
            if(flag)
            {
                printf("%6d",n);
                sum+=n;
                count++;
            }
        }
    }
    printf("\nsum=%d\n",sum);
    return 0;
}
