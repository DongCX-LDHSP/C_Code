#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,n=1;
    char c1='>',c2=' ',c3=' ',c4=' ';
    while(0<n<5)
    {
        printf("*******************************\n");
        printf("*                             *\n");
        printf("*        游标式菜单示例       *\n");
        printf("*                             *\n");
        printf("*         %c菜单项一           *\n",c1);
        printf("*         %c菜单项二           *\n",c2);
        printf("*         %c菜单项三           *\n",c3);
        printf("*         %c退出               *\n",c4);
        printf("*                             *\n");
        printf("*******************************\n");
        printf("按上下方向键改变选择的菜单项，按回车键选择执行的功能：");
        if(n==1)
        {
            c1='>',c2=' ',c3=' ',c4=' ';
            a=getch();
            switch(a)
            {
                case 13:
                    n=6;
                    system("cls");
                    printf("选择了第一项菜单，按回车键返回……");
                    a=getch();
                    if(a==13)
                    {
                        n=1;
                        system("cls");
                    }
                    break;
                case 72:
                    n=4;
                    break;
                case 80:
                    n=2;
                    break;
            }

            system("cls");
            }

        if(n==2)
        {
            c1=' ',c2='>',c3=' ',c4=' ';
            a=getch();
            switch(a)
            {
                case 13:{n=6;system("cls");printf("选择了第二项菜单，按回车键返回……");a=getch();if(a==13) {n=1;system("cls");}break;}
                case 72: {n=1;break;}
                case 80: {n=3;break;}
            }
        system("cls");
        }

        if(n==3)
        {
            c1=' ',c2=' ',c3='>',c4=' ';
            a=getch();
            switch(a)
            {
                case 13:{n=6;system("cls");printf("选择了第三项菜单，按回车键返回……");a=getch();if(a==13) {n=1;system("cls");}break;}
                case 72: {n=2;break;}
                case 80: {n=4;break;}
            }
            system("cls");
        }

        if(n==4)
        {
            c1=' ',c2=' ',c3=' ',c4='>';
            a=getch();
            switch(a)
            {
                case 13:{return 0;}
                case 72: {n=3;break;}
                case 80: {n=1;break;}
            }
            system("cls");
        }
    }
}
