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
            printf("*           �α�ʽ��Ļ�˵�ʾ��              *\n");
            printf("*                                           *\n");
            printf("*             >�˵���һ                     *\n");
            printf("*              �˵����                     *\n");
            printf("*              �˵�����                     *\n");
            printf("*              �˳�                         *\n");
            printf("*                                           *\n");
            printf("*********************************************\n");
            printf("�����·�����ı�ѡ��Ĳ˵�����س���ִ��ѡ��Ĺ���...:\n");
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
                    printf("��ѡ���˵�1��˵������س�������...\n");
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
            printf("*           �α�ʽ��Ļ�˵�ʾ��              *\n");
            printf("*                                           *\n");
            printf("*              �˵���һ                     *\n");
            printf("*             >�˵����                     *\n");
            printf("*              �˵�����                     *\n");
            printf("*              �˳�                         *\n");
            printf("*                                           *\n");
            printf("*********************************************\n");
            printf("�����·�����ı�ѡ��Ĳ˵�����س���ִ��ѡ��Ĺ���...:\n");
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
                    printf("��ѡ���˵�2��˵������س�������...\n");
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
            printf("*           �α�ʽ��Ļ�˵�ʾ��              *\n");
            printf("*                                           *\n");
            printf("*              �˵���һ                     *\n");
            printf("*              �˵����                     *\n");
            printf("*             >�˵�����                     *\n");
            printf("*              �˳�                         *\n");
            printf("*                                           *\n");
            printf("*********************************************\n");
            printf("�����·�����ı�ѡ��Ĳ˵�����س���ִ��ѡ��Ĺ���...:\n");
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
                    printf("��ѡ���˵�3��˵������س�������\n");
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
            printf("*           �α�ʽ��Ļ�˵�ʾ��              *\n");
            printf("*                                           *\n");
            printf("*              �˵���һ                     *\n");
            printf("*              �˵����                     *\n");
            printf("*              �˵�����                     *\n");
            printf("*             >�˳�                         *\n");
            printf("*                                           *\n");
            printf("*********************************************\n");
            printf("�����·�����ı�ѡ��Ĳ˵�����س���ִ��ѡ��Ĺ���...:\n");
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
