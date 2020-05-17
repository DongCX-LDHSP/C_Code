#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]= {3,42,435,53,423,2,43,54,6,4};
    int i,j,temp;
    for(i=0; i<10; i++)
        for(j=0; j<10-i-1; j++)
            if(a[j+1]>a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    for(i=0; i<10; i++)
        printf("%d ",a[i]);
    return 0;
}
