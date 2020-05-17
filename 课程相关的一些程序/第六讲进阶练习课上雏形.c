#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Add();//加法练习
int Subtraction();//减法练习
int Explanation();//程序说明
int Add()
{
    int counter;
    int i;//记录回答正确的次数
    int a,b;//两个加数
    int flag;//控制循环结束
    for(counter=1;counter<=5;counter++)
    {
        do
        {
            srand((unsigned)time(NULL));
            a=rand()%10+0;
            b=rand()%10+0;
            if(a+b>10)
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
        }while(flag);
    }
}
int Subtraction()
{
    
}
int Explanation()
{
    
}
int main()
{
    printf("10以内加减法辅助教学程序\n")
    printf("*****************************\n");
    printf("*****************************\n");
    printf("**                           **\n");
    printf("**        1 加法练习        **\n");
    printf("**        2 减法练习        **\n");
    printf("**        3 程序说明        **\n");
    printf("**        4 退出程序        **\n");
    printf("**                           **\n");
    printf("*****************************\n");
    printf("*****************************\n");
    return 0;
}
