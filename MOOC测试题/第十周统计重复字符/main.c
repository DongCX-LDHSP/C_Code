#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 80

int CountRepeatStr(char str[N+1],int *tag)
{
    int Re=0;
    for(int i=0,count=1,len=strlen(str);i<len-1;i++)
        if(str[i]==str[i+1])
        {
            count++;
            if(count>Re)
            {
                *tag=i;
                Re=count;
            }
        }
        else
            count=1;
    return Re;
}
int main()
{
    char source[N+1];
    int col,ReTimes;
    printf("Input a string:\n");
    gets(source);
    ReTimes=CountRepeatStr(source,&col);
    printf("%c:%d\n",source[col],ReTimes);
    return 0;
}
