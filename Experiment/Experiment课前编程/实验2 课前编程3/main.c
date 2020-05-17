#include <stdio.h>
int  main()
{
    int k,n;
    printf("please input n:");
    scanf("%d",&n);
    printf("%d=",n);
    for(k=2;k<n;k++)
    {
        while(k!=n)
        {
            if(n%k==0)
            {
                n=n/k;
                printf("%d*",k);
            }
            else
            {
                break;
            }
        }
    }
    printf("%d\n",n);
    return 0;
}
