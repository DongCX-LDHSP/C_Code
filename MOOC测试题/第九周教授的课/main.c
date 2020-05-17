#include <stdio.h>
#include <stdlib.h>

int IsCancel(int a[], int n, int k);
int IsCancel(int a[], int n, int k)
{
    int count=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]<=0)
        {
            count++;
        }
    }
    if(count<k)
        return 0;
    else
        return 1;
}
int main()
{
    int a[1000];
    int n,k;
    int i;
    int R;
    printf("Input n,k:\n");
    scanf("%d,%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    R=IsCancel(a,n,k);
    if(R)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}
