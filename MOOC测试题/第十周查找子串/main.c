#include <stdio.h>
#include <stdlib.h>
#define N 100

int SearchString(char s[], char d[])
{
    int i=0,j=0,col=0,flag=1;
    do
    {
        j=0;
        flag=1;
        for(i=col; s[i]!='\0'; i++)
        {
            if(s[i]==d[j])
            {
                col=i+1;
                break;
            }
        }
        for(; d[j]!='\0'&&s[i]!='\0'; i++,j++)
            if(s[i]!=d[j])
            {
                flag=0;
                break;
            }
        if(flag)
        {
            if(d[j]=='\0')
                return col;
        }
    }
    while(s[i]!='\0');
    return -1;
}
int main()
{
    char pre[N],get[N];
    int r;
    printf("Input a string:");
    gets(pre);
    printf("Input another string:");
    gets(get);
    r=SearchString(pre,get);
    if(r!=-1)
        printf("Searching results:%d\n",r);
    else
        printf("Not found!\n");
    return 0;
}
