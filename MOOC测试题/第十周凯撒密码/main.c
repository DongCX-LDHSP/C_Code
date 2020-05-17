#include <stdio.h>
#include <stdlib.h>
#define N 80

void Caesar(char c[])
{
    int i;
    for(i = 0; c[i] != '\0'; i++)
        if(c[i] < 120)
            c[i] += 3;
        else
            c[i] = c[i] - 23;
}
int main()
{
    char Secret[N];
    printf("Input a string:");
    gets(Secret);
    Caesar(Secret);
    puts(Secret);
    return 0;
}
