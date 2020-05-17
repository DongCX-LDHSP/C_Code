#include <stdio.h>
#include <stdlib.h>
#define N 80

int IsSubString(char a[], char b[])
{
    int i,j;
    int flag1=1,flag2=1;
    for(j=0;a[j]!='\0'&&flag1;j++)
        if(a[j]==b[0])
            flag1=0;
    if(a[--j]!='\0')
    {
        for(i=0;a[j]!='\0'&&b[i]!='\0'&&flag2;i++,j++)
            if(a[j]!=b[i])
            {
                flag2=0;
                break;
            }
        if(flag2&&b[i]=='\0')
            return 1;
        else
            return 0;
    }
    return 0;
}
int main()
{
    char a[N+1],b[N+1];
    int r;
    printf("Input the first string:");
    gets(a);
    printf("Input the second string:");
    gets(b);
    r=IsSubString(a,b);
    if(r==1)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
