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
        printf("*        �α�ʽ�˵�ʾ��       *\n");
        printf("*                             *\n");
        printf("*         %c�˵���һ           *\n",c1);
        printf("*         %c�˵����           *\n",c2);
        printf("*         %c�˵�����           *\n",c3);
        printf("*         %c�˳�               *\n",c4);
        printf("*                             *\n");
        printf("*******************************\n");
        printf("�����·�����ı�ѡ��Ĳ˵�����س���ѡ��ִ�еĹ��ܣ�");
        if(n==1)
        {
            c1='>',c2=' ',c3=' ',c4=' ';
            a=getch();
            switch(a)
            {
                case 13:
                    n=6;
                    system("cls");
                    printf("ѡ���˵�һ��˵������س������ء���");
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
                case 13:{n=6;system("cls");printf("ѡ���˵ڶ���˵������س������ء���");a=getch();if(a==13) {n=1;system("cls");}break;}
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
                case 13:{n=6;system("cls");printf("ѡ���˵�����˵������س������ء���");a=getch();if(a==13) {n=1;system("cls");}break;}
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
