#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000];
    int n;
    int i;
    int j;
    int k;
    int count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        //printf("%3d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n&&j!=i;j++)
        {
            for(k=0;k<n;k++)
            {
                if(a[i]+a[j]==a[k])
                {
                    count++;
                }
            }
        }
        if(j==i)
        {
            for(j++;j<n&&j>i;j++)
            {
                for(k=0;k<n;k++)
                {
                    if(a[i]+a[j]==a[k])
                    {
                        count++;
                    }
                }
            }
        }
    }
    count=count/2;
    printf("%d",count);
    return 0;
}
