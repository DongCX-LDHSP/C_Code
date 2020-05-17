#include  <stdio.h>
int main()
{
    int sum=0,m=1;
    while(m!=0)
        {
            printf("Input m:\n");
            scanf("%d",&m);
            if(m!=0)
            {
                sum=sum+m;
                printf("sum = %d\n",sum);
            }
        }
    return 0;
}
