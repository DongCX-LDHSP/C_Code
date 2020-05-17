#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[12];
    int i;
    int n;
    a[0]=1;
    a[1]=2;
    for(i=2;i<=11;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    printf("Input n(n<=12):\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
    printf("\nTotal=%d\n",a[n-1]);
    return 0;
}
