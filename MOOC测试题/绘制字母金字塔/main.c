/*往下查看初征的方案*/
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
/*以下为我最初的版本
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
*/

/*以下为初征程序的修改版
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,j,k,l;//j,k,l均为循环结束控制变量
    int m;//用于控制输出的空格数
    int n;//控制while循环结束
    char a;//接收用户输入的字符
    char b;
    printf("Please input a capital:\n");
    scanf("%c",&a);
    n=a-64;//将字符转化为对应的1~26
    m=n;
    while(i<=n)
    {
        b='A';
        for(j=1;j<=m;j++)//输出空格
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)//输出正序字母
        {
            printf("%c",b);
            b++;
        }
        for(l=1;l<=(i-1);l++)//输出倒序字母
        {
            printf("%c",(b-2));
            b--;
        }
        i++;
        m--;
        printf("\n");
    }
    return 0;
}
*/
