#include <stdio.h>
#include <string.h>
#define N 80
char* MyStrcat(char *dest, char *source);
int main(void)
{
        char a[2*N+1],b[N];
        char *first=a, *second=b, *result;
        printf("Input the first string:\n");
        gets(first);
        printf("Input the second string:\n");
        gets(second);
        result = MyStrcat(first, second);
        printf("The result is : %s\n", result);
        return 0;
}
char* MyStrcat(char *dest, char *source)
{
        int i = 0;
        int j = 0;
        while (*(dest+i)!='\0')   i++;
        for (; *(source+j)!='\0'; i++,j++)
        {
            *(dest+i) = *(source+j);
        }
        *(dest+i) = '\0';
        return dest;
}
