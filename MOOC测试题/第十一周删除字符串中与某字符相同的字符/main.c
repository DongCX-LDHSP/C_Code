#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

int main()
{
    char a[N],b[N];
    char ch;
    int i=-1,j,k,len;
    printf("Input a string:\n");
    gets(a);
    len=strlen(a);
    printf("Input a character:\n");
    ch=getchar();
    do
    {
        i++;
        k=i;
        if(a[i]==ch)
        {
            for(j=0,i++;i<len;i++,j++)
            {
                b[j]=a[i];
            }
            b[j]='\0';
            a[k]='\0';
            strcat(a,b);
        }
        i=k;
    }while(i<len-1);
    printf("Results:%s\n",a);
    return 0;
}
