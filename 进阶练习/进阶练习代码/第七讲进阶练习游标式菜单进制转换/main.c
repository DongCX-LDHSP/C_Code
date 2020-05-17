#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void Menu(void);///菜单函数
void Change(int a,int n);///a用于控制进制转换的类型，n是操作数
void Change(int a,int n)///控制进制转换的类型，n是待转换的数
{
    if(n/a>0)
    {
        Change(a,n/a);
    }
    if(n%a<=9)
    {
        printf("%d",n%a);
    }
    else
    {
        printf("%c",n%a+55);
    }
}
void Menu(void)
{
    char ch1,ch2,ch3,ch4;///存储选项前的字符
    int a;///控制进制转换的类型
    int n;///待转换的数
    int nChar=1;///实现选项前的字符的改变
    char cPress;///存储用户的按键
    do
    {
        switch(nChar)
        {
        case 1:///第一行 由第二行移向第一行 由第四行移向第一行
            ch1='>'; ch2=' '; ch3=' '; ch4=' '; a=2;
            break;
        case 2:///由第一行移向第二行 由第三行移向第二行
            ch1=' '; ch2='>'; ch3=' '; ch4=' '; a=8;
            break;
        case 3:///由第二行移向第三行 由第四行移向第三行
            ch1=' '; ch2=' '; ch3='>'; ch4=' '; a=16;
            break;
        case 4:///由第一行移向第四行 由第三行移向第四行
            ch1=' '; ch2=' '; ch3=' '; ch4='>'; a=0;
            break;
        default:
            ch1='>'; ch2=' '; ch3=' '; ch4=' '; a=2;
            break;
        }
        printf("\n");
        printf("    ****************************\n");
        printf("    *                          *\n");
        printf("    *  %c十进制数转二进制数     *\n",ch1);
        printf("    *  %c十进制数转八进制数     *\n",ch2);
        printf("    *  %c十进制数转16进制数     *\n",ch3);
        printf("    *  %c退出                   *\n",ch4);
        printf("    *                          *\n");
        printf("    ****************************\n");
        printf("    按上下方向键切换功能选项后，按回车进入...\n");
        printf("    ");
        do///解决非法输入的问题
        {
            cPress=getch();
        }while(cPress!=13&&cPress!=72&&cPress!=80);
        if (cPress==13)
        {
            if (a!=0)
            {
                system("cls");
                printf("你选择了十进制数转 %d 进制数...\n",a);
                printf("请输入你想要转换的数字:\n"); scanf("%d",&n);
                Change(a,n);
                printf("\n按回车返回菜单...\n"); getch(); system("cls");
            }
            else
            {
                system("cls");
                return ;
            }
        }
        else if (cPress==72)
        {
            if      (nChar==1)    {  nChar=4;  }
            else if (nChar==2)    {  nChar=1;  }
            else if (nChar==3)    {  nChar=2;  }
            else if (nChar==4)    {  nChar=3;  }
            system("cls");
        }
        else if (cPress==80)
        {
            if      (nChar==1)    {  nChar=2;  }
            else if (nChar==2)    {  nChar=3;  }
            else if (nChar==3)    {  nChar=4;  }
            else if (nChar==4)    {  nChar=1;  }
            system("cls");
        }
    }while(1);
}
int main()
{
    Menu();
    return 0;
}
/*void Two(int n);///二进制转换
void Eight(int n);///八进制转换
void Sixteen(int n);///十六进制转换*/
/*void Two(int n)
{
    if(n/2>0)
    {
        Two(n/2);
    }
    printf("%d",n%2);
}
void Eight(int n)
{
    if(n/8>0)
    {
        Eight(n/8);
    }
    printf("%d",n%8);
}
void Sixteen(int n)
{
    if(n/16>0)
    {
        Sixteen(n/16);
    }
    if(n%16<=9)
    {
        printf("%d",n%16);
    }
    else
    {
        printf("%c",n%16+55);
    }
}*/
/*int Choose(void);///改变ch1,ch2,ch3,ch4的值或者调用Change()函数
int Choose(void)
{
    char cPress;///接收用户的按键行为
    int a;///控制功能的实现
    ///int nChar;///用于调整选项前的字符
    getch();
    cPress=getch();
    if(cPress==13)
    {
        a=1;
        system("cls");
        Change(a);
    }
    else if(cPress==72)
    {
        system("cls");
        Menu();
    }
    else if(cPress==80)
    {
        system("cls");
        Menu();
    }
}*/
