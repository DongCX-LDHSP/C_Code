#include <stdio.h>
#include <stdlib.h>
#define N 100

void Seperate(int a[], int n); //数组a[]存放用户输入的n个整数
void Seperate(int a[], int n)
{
    int i,j,k;
    int b[N],c[N];
    for(i=0,j=0,k=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
    }
    printf("%d",c[0]);
    for(i=1;i<k;i++)
    {
        printf(",%d",c[i]);
    }
    printf("\n%d",b[0]);
    for(i=1;i<j;i++)
    {
        printf(",%d",b[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    int a[N],i;
    printf("Input n:");
    scanf("%d",&n);
    printf("Input numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Seperate(a,n);
    return 0;
}
