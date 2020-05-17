#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a,b,c;
    char ch1,ch2;
    ch2='=';//定义=
    srand((unsigned)time(NULL));
    a=rand()%(11)+0;//随机生成第 一 个随机数
    c=rand()%(2)+0;//生成 0 或 1 两个随机数用于switch()的参数
    switch(c)
    {
    case 0:
        ch1='+';
        break;
    case 1:
        ch1='-';
        break;
    default:
        printf("Please restart the program until you get the right expression!");
        break;
    }//这个switch()函数是为了随机生成 + 或 -
    b=rand()%(11)+0;//随机生成第 二 个随机数
    if(a+b<=10&&a-b>=0)//判断a,b两个数是否满足要求
    {
        printf("%d",a);
        printf("%c",ch1);
        printf("%d",b);
        printf("%c",ch2);
    }
    else
    {
        printf("Please restart the program until you get the right expression!");
        //若不满足重新运行程序，直到生成一个合理的表达式
        //经测试，程序可能会在连续几次运行的情况下输出上述语句，还请同学检验时多试几次
    }
    return 0;
}
