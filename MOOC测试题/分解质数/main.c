#include <stdio.h>
int  main()
{
    int i,n;
    printf("please input n:");
    scanf("%d",&n);
    printf("%d=",n);
    for(i=2;i<n;i++)
    {
        while(i!=n)
        {
            if(n%i==0)
            {
                n=n/i;
                printf("%d*",i);
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
