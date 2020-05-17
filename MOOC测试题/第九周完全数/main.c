#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    int i;
    int j;
    int sum=0;
    int a[1000]={0};
    printf("Input m:\n");
    scanf("%d",&m);
    if(m==1)
        printf("No!\n");
    else
    {
        for(i=1,j=0;i<=m/2;i++)
        {
            if(m%i==0)
            {
                a[j]=i;
                sum+=i;
                j++;
            }
        }
        if(sum==m)
        {
            printf("Yes!\n");
            for(j=0;a[j]!=0;j++)
            {
                printf("%d",a[j]);
                if(a[j+1]!=0)
                    printf(",");
            }
        }
        else
        {
            printf("No!\n");
        }
    }
    return 0;
}
