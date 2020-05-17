#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

int main()
{
    char a[N];
    int i,j=0,len;
    char temp;
    printf("Input a string:\n");
    gets(a);
    len=strlen(a);
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
        }while(i<len-j-1);
    }while(j<len-1);
    printf("%s",a);
    return 0;
}
