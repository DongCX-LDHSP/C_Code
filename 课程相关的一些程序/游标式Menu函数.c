#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

static int nChar=1;///利用静态变量的特性实现返回菜单时为进入菜单前的状态
int main(void)
{
    char ch1,ch2,ch3,ch4;
    int a;///控制进制转换的类型
    /*int n;///待转换的数*////程序的控制变量和操作数
    char cPress;
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
                /*printf("你选择了十进制数转 %d 进制数...\n",a);
                printf("请输入你想要转换的数字:\n"); scanf("%d",&n);
                Change(a,n);
                printf("\n按回车返回菜单...\n"); getch(); system("cls");*/
                ///此部分为要实现的功能
            }
            else
            {
                system("cls");
                return 0;
            }
        }
        else if (cPress==72)
        {
            if      (nChar==1)    {  nChar=4;system("cls");  }
            else if (nChar==2)    {  nChar=1;system("cls");  }
            else if (nChar==3)    {  nChar=2;system("cls");  }
            else if (nChar==4)    {  nChar=3;system("cls");  }
        }
        else if (cPress==80)
        {
            if      (nChar==1)    {  nChar=2;system("cls");  }
            else if (nChar==2)    {  nChar=3;system("cls");  }
            else if (nChar==3)    {  nChar=4;system("cls");  }
            else if (nChar==4)    {  nChar=1;system("cls");  }
        }
    }while(1);
}
