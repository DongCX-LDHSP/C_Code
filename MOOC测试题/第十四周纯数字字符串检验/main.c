#include <stdio.h>
#include <stdlib.h>

int IsAllDigit(char p[]);/*若全由数字组成，则函数返回1，否则返回0*/
int IsAllDigit(char p[])
{
    int i;
    int flag;
    for(i=0;p[i]!='\0';i++)
    {
        if(p[i]=='0'||p[i]=='1'||p[i]=='2'||p[i]=='3'||p[i]=='4'||
           p[i]=='5'||p[i]=='6'||p[i]=='7'||p[i]=='8'||p[i]=='9')
           flag=1;
        else
        {
            flag=0;
            break;
        }
    }
    if(flag)
        return 1;
    else
        return 0;
}
int main()
{
    char p[21];
    int r;
    printf("Please input a string:\n");
    gets(p);
    r=IsAllDigit(p);
    if(r==1)
        printf("The string is digit string.");
    else
        printf("The string is not digit string.");
    return 0;
}
