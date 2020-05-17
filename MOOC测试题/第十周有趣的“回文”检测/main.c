#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

int main()
{
    char a[N];
    char *pStart=a,*pEnd=a;
    printf("Input string:");
    gets(a);
    while(*pEnd!='\0')
    {
        pEnd++;
    }
    pEnd--;
    for(;pStart<=pEnd;pStart++,pEnd--)
    {
        if((strcmp(pStart,pEnd)))
            break;
    }
    if(*pStart==*pEnd||*(pStart-1)==*pEnd)
    {
        printf("Yes!\n");
    }
    else
    {
        printf("No!\n");
    }
    return 0;
}
