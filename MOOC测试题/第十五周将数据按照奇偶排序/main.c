#include <stdio.h>
#include <stdlib.h>

void Bubble(int a[10])
{
    int j=0,i,temp;
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
        }while(i<9-j);
    }while(j<9);
}
int main()
{
    int number[10],odd[10]={0},even[10]={0},i,j,k;
    printf("Input 10 numbers:\n");
    for(i=0;i<10;i++)
        scanf("%d",&number[i]);
    Bubble(number);
    for(i=0,j=0,k=0;i<10;i++)
    {
        if(number[i]%2!=0)
        {
            odd[j]=number[i];
            j++;
        }
        else
        {
            even[k]=number[i];
            k++;
        }
    }
    printf("Output: ");
    for(i=0;odd[i]!=0;i++)
        printf("%d,",odd[i]);
    for(i=0;even[i+1]!=0;i++)
        printf("%d,",even[i]);
    printf("%d\n",even[i]);
    return 0;
}
