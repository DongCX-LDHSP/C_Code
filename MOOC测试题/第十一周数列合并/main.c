#include <stdio.h>
#include <stdlib.h>
#define N 5

void Merge(int a[],int b[],int c[],int m,int n)
{
    int i=0,j=0,k=0;
    for(;i<m&&j<n;k++)
        if(a[i]>b[j])
            c[k]=a[i++];
        else
            c[k]=b[j++];
    if(i==m)
        for(;j<n;j++)
            c[k++]=b[j];
    else if(j==n)
        for(;i<m;i++)
            c[k++]=a[i];
    for(k=0;k<m+n;k++)
        printf("%4d",c[k]);
}
int main()
{
    int a[N],b[N],c[2*N];
    int m,n;
    int i;
    printf("Input m,n:");
    scanf("%d,%d",&m,&n);
    printf("Input array a:");
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("Input array b:");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    Merge(a,b,c,m,n);
    return 0;
}
