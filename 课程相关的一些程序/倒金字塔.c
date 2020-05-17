#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cCapital;
    int number,i,j,k;
    printf("Please input a capital:\n");
    scanf("%c",&cCapital);
    number=cCapital-64;
    for(;number>=1;number--)//控制输出的行数
    {
        for(i=1;i<=number;i++)//控制输出的空格数
        {
            printf(" ");
        }
        for(j=1;j<=number;j++)//控制字符正序输出
        {
            printf("%c",(j+64));
        }
        for(k=number-1;k>=1;k--)//控制字符倒序输出
        {
            printf("%c",k+64);
        }
        printf("\n");//每输出一行字符换一次行
    }

    return 0;
}