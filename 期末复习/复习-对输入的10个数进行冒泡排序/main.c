#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,j,nTemp;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
        for(j=1;j<10-i;j++)
            if(a[j]<a[j-1])
            {
                nTemp=a[j];
                a[j]=a[j-1];
                a[j-1]=nTemp;
            }
    for(i=0;i<10;i++)
        printf("%3d",a[i]);
    return 0;
}
