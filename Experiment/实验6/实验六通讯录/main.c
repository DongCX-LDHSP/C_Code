#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define N 20

enum out_or_not{no,yes};
typedef struct address_book
{
    char name[10];
    char phone_number[15];
}BOOK;
int Input(BOOK book[N],int i);
void Search(BOOK book[N],int i);
int Input(BOOK book[N],int i)
{
    printf("Input name...\n");
    gets(book[i].name);
    printf("Input number...\n");
    gets(book[i].phone_number);
    printf("�ѳɹ��½���ϵ�ˣ������������...");
    getch();
    return ++i;
}
void Search(BOOK book[N],int i)
{
    char name[10];
    int j,if_all_out=yes;
    printf("Input the name who you are going to search...\n");
    gets(name);
    for(j=0;j<N;j++)
    {
        if(strcmp(name,book[j].name)==0)
        {
            printf("%s�ĵ绰Ϊ��%s\n",book[j].name,book[j].phone_number);
            if_all_out=no;
            break;
        }
    }
    if(if_all_out)
    {
        printf("����Ϊ������ϵ�˵ĵ绰\n---------------------------------\n");
        for(j=0;j<i;j++)
        {
            printf(" %d. %s�ĵ绰Ϊ��%s\n",j+1,book[j].name,book[j].phone_number);
        }
        printf("---------------------------------\n");
    }
    printf("��ѯ�����������������...");
    getch();
}
int main()
{
    BOOK book[N];
    int if_exit=1,i=0,j;
    char choose;
    for(j=0;j<N;j++)
    {
        strcpy(book[j].name,"None!");
    }
    while(if_exit)
    {
        printf("-----------------------------\n");
        printf("|     1 �½���ϵ��          |\n");
        printf("|     2 ��ѯ��ϵ��          |\n");
        printf("|     3 �˳�����            |\n");
        printf("-----------------------------\n");
        printf("������Ӧ������ѡ����...\n");
        choose=getch();
        system("cls");
        switch(choose)
        {
            case '1':
                i=Input(book,i);
                system("cls");
                break;
            case '2':
                Search(book,i);
                system("cls");
                break;
            case '3':
                if_exit=0;
                break;
            default :
                printf("������󣬰������������������...");
                getch();
                system("cls");
                break;
        }
    }
    return 0;
}
