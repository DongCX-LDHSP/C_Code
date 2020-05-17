#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20
void fun(char *s);
void fun(char *s)
{
    int i,n;
    char a[N];
    n=strlen(s)-1;
    for(i=0;*s+i!='\0'&&n>=0;i++,n--)
    {
        a[n]=*s+i;
    }
    a[i]='\0';
    printf("%s\n",a);
}
int main()
{
    char a[N];
    char *s=a;
    int n;
    scanf("%s",a);
    getchar();
    n=strlen(a);
    a[n+1]='\0';
    fun(s);
    return 0;
}
