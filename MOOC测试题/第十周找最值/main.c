#include <stdio.h>
#include <stdlib.h>

void FindMax(int num[], int n, int *pMaxPos)
{
    int i=0;
    for(i=0;i<n;i++)
        if(num[*pMaxPos]<num[i])
            *pMaxPos=i;
    return *pMaxPos;
}
void FindMin(int num[], int n, int *pMinPos)
{
    int i=0;
    for(i=0;i<n;i++)
        if(num[*pMinPos]>num[i])
            *pMinPos=i;
    return *pMinPos;
}
int main()
{
    int a[10],i;
    int nPosition1=0,nPosition2=0;
    printf("Input 10 numbers:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    FindMax(a,10,&nPosition1);
    FindMin(a,10,&nPosition2);
    printf("Max=%d,Position=%d,Min=%d,Position=%d\n",a[nPosition1],nPosition1,a[nPosition2],nPosition2);
    return 0;
}
