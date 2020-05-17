#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    char a;
    int n=1;
    while(n)
    {
        while(n==1)
        {
            printf("*********************************************\n");
            printf("*                                           *\n");
            printf("*           游标式屏幕菜单示例              *\n");
            printf("*                                           *\n");
            printf("*             >菜单项一                     *\n");
            printf("*              菜单项二                     *\n");
            printf("*              菜单项三                     *\n");
            printf("*              退出                         *\n");
            printf("*                                           *\n");
            printf("*********************************************\n");
            printf("按上下方向键改变选择的菜单项，按回车键执行选择的功能...:\n");
            a=getch();
            switch(a)
            {
                case 80:
                    n=2;
                    system("cls");
                    break;
                case 72:
                    n=4;
                    system("cls");
                    break;
                case 13:
                    system("cls");
                    printf("你选择了第1项菜单，按回车键返回...\n");
                    a=getch();
                    if(a==13)
                        n=1;
                    system("cls");
                    break;
                default:
                    system("cls");
                    break;
            }
        }
        while(n==2)
        {
            printf("*********************************************\n");
            printf("*                                           *\n");
            printf("*           游标式屏幕菜单示例              *\n");
            printf("*                                           *\n");
            printf("*              菜单项一                     *\n");
            printf("*             >菜单项二                     *\n");
            printf("*              菜单项三                     *\n");
            printf("*              退出                         *\n");
            printf("*                                           *\n");
            printf("*********************************************\n");
            printf("按上下方向键改变选择的菜单项，按回车键执行选择的功能...:\n");
            a=getch();
            switch(a)
            {
                case 72:
                    n=1;
                    system("cls");
                    break;
                case 80:
                    n=3;
                    system("cls");
                    break;
                case 13:
                    system("cls");
                    printf("你选择了第2项菜单，按回车键返回...\n");
                    a=getch();
                    if(a==13)
                        n=2;
                    system("cls");
                default:
                    n=2;
                    system("cls");
                    break;
            }
        }
        while(n==3)
        {
            printf("*********************************************\n");
            printf("*                                           *\n");
            printf("*           游标式屏幕菜单示例              *\n");
            printf("*                                           *\n");
            printf("*              菜单项一                     *\n");
            printf("*              菜单项二                     *\n");
            printf("*             >菜单项三                     *\n");
            printf("*              退出                         *\n");
            printf("*                                           *\n");
            printf("*********************************************\n");
            printf("按上下方向键改变选择的菜单项，按回车键执行选择的功能...:\n");
            a=getch();
            switch(a)
            {
                case 72:
                    n=2;
                    system("cls");
                    break;
                case 80:
                    n=4;
                    system("cls");
                    break;
                case 13:
                    system("cls");
                    printf("你选择了第3项菜单，按回车键返回\n");
                    a=getch();
                    if(a==13)
                        n=3;
                    system("cls");
                    break;
                default:
                    n=3;
                    system("cls");
                    break;
            }
        }
        while(n==4)
        {
            printf("*********************************************\n");
            printf("*                                           *\n");
            printf("*           游标式屏幕菜单示例              *\n");
            printf("*                                           *\n");
            printf("*              菜单项一                     *\n");
            printf("*              菜单项二                     *\n");
            printf("*              菜单项三                     *\n");
            printf("*             >退出                         *\n");
            printf("*                                           *\n");
            printf("*********************************************\n");
            printf("按上下方向键改变选择的菜单项，按回车键执行选择的功能...:\n");
            a=getch();
            switch(a)
            {
                case 72:
                    n=3;
                    system("cls");
                    break;
                case 80:
                    n=1;
                    system("cls");
                    break;
                case 13:
                    system("cls");
                    return 0;
                default:
                    n=4;
                    system("cls");
                    break;
            }
        }
    }
}
