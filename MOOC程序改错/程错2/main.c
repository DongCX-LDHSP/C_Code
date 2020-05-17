#include <stdio.h>
#include <math.h>
int main()
{
    int n,i;
    printf("Input n:\n");
    scanf("%d",&n);
    if(n>1)
    {
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                printf("No!\n");
                break;
            }
            else
            {
                continue;
            }

        }
        if(n%i!=0)//在一个数不是非素数的情况下判断其在退出循环时对i的余数是否！=0，若是，则是素数

        {
            printf("Yes!\n");
        }
        else
        {
        }
    }
    else
    {
        printf("No!\n");
    }
    return 0;
}
