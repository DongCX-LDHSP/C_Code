#include <stdio.h>
#include <stdlib.h>
#define N 100

///该程序实现了升序排列
int main()
{
    int n;
    int a[N],i,j=0;
    int temp;
    printf("Input n:");
    scanf("%d",&n);
    printf("Input %d numbers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    do
    {
        j++;
        i=-1;
        do
        {
            i++;
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }while(i<n-j-1);
    }while(j<n-1);
    printf("Sorting results:");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
    return 0;
}
