/*考虑到中文字符与英文字符占用的字节不同，
检验非法字符时请输入英文字符哦！*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void Add(void);//加法练习
void Subtraction(void);//减法练习
void Explanation(void);//程序说明
void Menu(void);//菜单函数
void Add()
{
    int counter;//控制最多能做的题目数量
    int i=0;//记录回答正确的次数
    int a,b;//两个加数
    int nAnswer;//接收用户的答案
    int flag;//控制生成加法练习的循环结束
    int R;//用于判断用户是否是一次回答正确
    int G;//控制答题循环结束
    int nRightpercent;//用于存储正确率
    printf("你正在进行加法练习，加油哦！\n");
    printf("\n");
    for(counter=1;counter<=5;counter++)
    {
        do//生成随机的加法练习题的循环
        {
            srand((unsigned)time(0));
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
        printf("%d. 你有三次机会回答该问题，仔细一点哦！\n",counter);
        R=0;
        G=0;
        do//等待用户输入答案并检测答案的正确性
        {
            printf("   %d + %d = ",a,b);
            scanf("%d",&nAnswer);
            if(nAnswer==a+b)
            {
                printf("   答对了！为你竖大擘！\n");
                break;
            }
            else
            {
                if(R<=1)//控制输出以下语句的次数
                {
                    printf("   答错了，再来一次吧！加油！\n");
                }
                G++;
                R++;
            }
        }while(G<=2);
        if(!R)//统计回答正确的次数
        {
            i++;
        }
        else if(G==3)
        {
            printf("   答题次数已达3次，练习结束了。别灰心，可以再尝试哦！\n");
            printf("\n");
            break;
        }
    }
    nRightpercent=i*20;
    printf("   你作答的正确率为：%d%%\n",nRightpercent);
    printf("\n");
    printf("   按回车返回菜单...\n");
    getch();
    system("cls");
    Menu();//调用Menu函数，返回菜单
}
void Subtraction()
{
    int counter;//控制最多能做的题目数量
    int i=0;//记录回答正确的次数
    int a,b;//两个加数
    int nAnswer;//接收用户的答案
    int flag;//控制生成减法练习的循环结束
    int R;//用于判断用户是否是一次回答正确
    int G;//用于控制答题循环结束
    int nRightpercent;//用于存储正确率
    printf("你正在进行减法练习，加油哦！\n");
    printf("\n");
    for(counter=1;counter<=5;counter++)
    {
        do//生成随机的减法练习题的循环
        {
            srand((unsigned)time(0));
            a=rand()%10+0;
            b=rand()%10+0;
            if(a-b<=0)
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
        }while(flag);
        printf("%d. 你有三次机会回答该问题，仔细一点哦！\n",counter);
        R=0;
        G=0;
        do//等待用户输入答案并检测答案的正确性
        {
            printf("   %d - %d = ",a,b);
            scanf("%d",&nAnswer);
            if(nAnswer==a-b)
            {
                printf("   答对了！为你竖大擘！\n");
                break;
            }
            else
            {
                if(R<=1)//控制输出以下语句的次数
                {
                    printf("   答错了，再来一次吧！加油！\n");
                }
                G++;
                R++;
            }
        }while(G<=2);
        if(!R)//统计回答正确的次数
        {
            i++;
        }
        else if(G==3)
        {
            printf("   答题次数已达3次，练习结束了。别灰心，可以再尝试哦！\n");
            printf("\n");
            break;
        }
    }
    nRightpercent=i*20;
    printf("   你作答的正确率为：%d%%\n",nRightpercent);
    printf("\n");
    printf("   按回车返回菜单...\n");
    getch();
    system("cls");
    Menu();
}
void Explanation()
{
    printf("\n");
    printf("\n");
    printf("       你正在查看程序说明\n");
    printf("\n");
    printf("           该程序用于随机生成10以内的加减法运\n");
    printf("       算练习题，用户可输入对应的数字，进行相\n");
    printf("       应的练习，并计算用户回答的正确率，用户\n");
    printf("       输入的数字需在相应的范围内，否则，不能\n");
    printf("       实现相应的功能。\n");
    printf("\n");
    printf("       按回车返回菜单...\n");
    getch();
    system("cls");
    Menu();
}
void Menu()
{
    int a;//用于存储用户输入的菜单项前的数字
    int b;//存储scanf的返回值
    printf("\n");
    printf("\n");
    printf("        10以内加减法辅助教学程序\n");
    printf("        *****************************\n");
    printf("        *****************************\n");
    printf("        **                         **\n");
    printf("        **       1 加法练习        **\n");
    printf("        **       2 减法练习        **\n");
    printf("        **       3 程序说明        **\n");
    printf("        **       4 退出程序        **\n");
    printf("        **                         **\n");
    printf("        *****************************\n");
    printf("        *****************************\n");
    printf("输入菜单项前的数字，选择功能，如数字超过菜单中的范围将显示0：\n");
    b=scanf("%d",&a);
    if(b!=1)
    {
        getchar();//将错误输入的字符从缓冲区中清除
        printf("你选择了功能：0\n");
        printf("按回车返回菜单...\n");
        getch();
        system("cls");
        Menu();
    }
    switch(a)
    {
        case 1:
            printf("你选择了功能：1\n");
            printf("按回车进入练习...\n");
            getch();
            system("cls");
            Add();
            break;
        case 2:
            printf("你选择了功能：2\n");
            printf("按回车进入练习...\n");
            getch();
            system("cls");
            Subtraction();
            break;
        case 3:
            printf("你选择了功能：3\n");
            printf("按回车进入程序说明...\n");
            getch();
            system("cls");
            Explanation();
            break;
        case 4:
            system("cls");
            break;
        default:
            printf("你选择了功能：0\n");
            printf("按回车返回菜单...\n");
            getch();
            system("cls");
            Menu();
            break;
    }
}
int main()
{
    Menu();
    return 0;
}
