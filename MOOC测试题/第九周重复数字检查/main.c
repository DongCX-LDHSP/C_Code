#include <stdio.h>
#include <stdlib.h>

long int CountRepeatNum(int count[],int n);
long int CountRepeatNum(int count[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n&&j<i;j++)
        {
            if(count[i]==count[j])
                return count[i];
        }
        for(j++;j<n&&j>i;j++)
        {
            if(count[i]==count[j])
                return count[i];
        }
    }
    return -1;
}
int main()
{
    int a[1000]={0};
    int countinput=0;
    int flag;
    int i=-1;
    long int n;
    printf("Input n:\n");
    scanf("%ld",&n);
    do
    {
        i++;
        a[i]=n%10;
        n=n/10;
        countinput++;
    }while(n!=0);
    flag=CountRepeatNum(a,countinput);
    if(flag!=-1)
    {
        printf("Repeated digit!\n");
    }
    else
    {
        printf("No repeated digit!\n");
    }
    return 0;
}
