#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void Change(int x,int n);///进制转换函数，x是待转换数
void Printscreen();///对应于我的Menu函数
int Backscreen(int n);///返回菜单函数
int Printoption(int n);///输出用户选择的功能，并让用户输入待转换数据

int Printoption(int n)///输出用户选择的功能，并让用户输入待转换数据
{
    int x;
    system("cls");
    switch(n)
    {
        case 6:printf("你选择的功能为十进制数转二进制数\n");break;
        case 7:printf("你选择的功能为十进制数转八进制数\n");break;
        case 8:printf("你选择的功能为十进制数转16进制数\n");break;
    }
    printf("请输入需要转换的十进制数：");
    scanf("%d",&x);
    switch(n)
    {
        case 6:printf("转换得到的二进制数为：");break;
        case 7:printf("转换得到的八进制数为：");break;
        case 8:printf("转换得到的16进制数为：");break;
    }
    return x;
}

int Backscreen(int n)///返回菜单函数
{
    int a;
    printf("\n按回车键返回菜单……");
    while(a!=13) a=getch();
    switch(n)
    {
        case 6:n=1;break;
        case 7:n=2;break;
        case 8:n=3;break;
    }
    return n;
}

void Printscreen(int c1,int c2,int c3,int c4)///输出形式Menu
{
    system("cls");
    printf("*******************************\n");
    printf("*                             *\n");
    printf("*     %c十进制数转二进制数     *\n",c1);
    printf("*     %c十进制数转八进制数     *\n",c2);
    printf("*     %c十进制数转16进制数     *\n",c3);
    printf("*            %c退出            *\n",c4);
    printf("*                             *\n");
    printf("*******************************\n\n");
    printf("说明:按上下方向键改变选项，按回车键选择功能");
    return;
}

void Change(int x,int n)///进制转换函数，x是待转换数
{
    int i;
    switch(n)
    {
        case 6:i=2;break;
        case 7:i=8;break;
        case 8:i=16;break;
    }
    if(x>=i) Change(x/i,n);
    if(x%i>9) printf("%c",x%i+55);
    else printf("%d",x%i);
    return;
}

int main()
{
    int a,n=1,x;
    char c1='>',c2=' ',c3=' ',c4=' ';
    while(0<n&&n<5)
    {
        Printscreen(c1,c2,c3,c4);
        while(0<n&&n<5)
        {
            if(n==1)
            {
                a=getch();
                switch(a)
                {
                    case 13:{///进入当前选择
                              n=6,a=0;
                              x=Printoption(n);///获得待转换数据
                              Change(x,n);///实现进制转换并输出
                              n=Backscreen(n);///强制用户选择返回菜单
                              break;
                            }
                    case 72:{c1=' ',c4='>';n=4;break;}///调整选择
                    case 80:{c1=' ',c2='>';n=2;break;}///调整选择
                }
                break;
            }

            if(n==2)
            {
                a=getch();
                switch(a)
                {
                    case 13:{///进入当前选择
                              n=7,a=0;
                              x=Printoption(n);///获得待转换数据
                              Change(x,n);///实现进制转换并输出
                              n=Backscreen(n);///强制用户选择返回菜单
                              break;
                            }
                    case 72:{c1='>',c2=' ';n=1;break;}///调整选择
                    case 80:{c2=' ',c3='>';n=3;break;}///调整选择
                }
                break;
            }

            if(n==3)
            {
                a=getch();
                switch(a)
                {
                    case 13:{///进入当前选择
                              n=8,a=0;
                              x=Printoption(n);///获得待转换数据
                              Change(x,n);///实现进制转换并输出
                              n=Backscreen(n);///强制用户选择返回菜单
                              break;
                            }
                    case 72:{c2='>',c3=' ';n=2;break;}///调整选择
                    case 80:{c3=' ',c4='>';n=4;break;}///调整选择
                }
                break;
            }

            if(n==4)
            {
                a=getch();
                switch(a)
                {
                    case 13:{return 0;}///进入当前选择
                    case 72:{c3='>',c4=' ';n=3;break;}///调整选择
                    case 80:{c1='>',c4=' ';n=1;break;}///调整选择
                }
                break;
            }
        }
    }
}
