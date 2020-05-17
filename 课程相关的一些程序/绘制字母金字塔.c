#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cCapital;
    int number,i,j,k,m=0;
    printf("Please input a capital:\n");
    scanf("%c",&cCapital);
    number=cCapital-64;
    for(;number>=1;)//控制输出的行数
    {
        for(;m<=number;number--)
        {
            for(i=1;i<=number;i++)//控制输出的空格数
            {
                printf(" ");
            }
            for(j=1;j<=m&&m<=number;j++)//控制字符正序输出
            {
                printf("%c",(j+64));
            }
            for(k=m;k<m;k--)//控制字符倒序输出
            {
                printf("%c",k+64);
            }
            printf("\n");//每输出一行字符换一次行
            m++;
        }
    }
    return 0;
}
