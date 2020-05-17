#include <stdio.h>
#include <stdlib.h>

int Fun(void)
{
    int i,j,k,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            k=6-i-j;
            if(k<=6)
                sum++;
        }
    }
    return sum;
}
int main()
{
    int i,j,k,sum;
    sum=Fun();
    printf("The result:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            k=6-i-j;
            if(k<=6)
                printf("red:%4d white:%4d black:%4d\n",i+1,j+1,k);
        }
    }
    printf("sum=%4d\n",sum);
    return 0;
}
