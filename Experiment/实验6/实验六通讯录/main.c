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
    printf("已成功新建联系人，按任意键返回...");
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
            printf("%s的电话为：%s\n",book[j].name,book[j].phone_number);
            if_all_out=no;
            break;
        }
    }
    if(if_all_out)
    {
        printf("以下为所有联系人的电话\n---------------------------------\n");
        for(j=0;j<i;j++)
        {
            printf(" %d. %s的电话为：%s\n",j+1,book[j].name,book[j].phone_number);
        }
        printf("---------------------------------\n");
    }
    printf("查询结束，按任意键返回...");
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
        printf("|     1 新建联系人          |\n");
        printf("|     2 查询联系人          |\n");
        printf("|     3 退出程序            |\n");
        printf("-----------------------------\n");
        printf("输入相应的数字选择功能...\n");
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
                printf("输入错误，按任意键返回重新输入...");
                getch();
                system("cls");
                break;
        }
    }
    return 0;
}
