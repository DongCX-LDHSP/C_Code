#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void Menu(void);///�˵�����
void Change(int a,int n);///a���ڿ��ƽ���ת�������ͣ�n�ǲ�����
void Change(int a,int n)///���ƽ���ת�������ͣ�n�Ǵ�ת������
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
    char ch1,ch2,ch3,ch4;///�洢ѡ��ǰ���ַ�
    int a;///���ƽ���ת��������
    int n;///��ת������
    int nChar=1;///ʵ��ѡ��ǰ���ַ��ĸı�
    char cPress;///�洢�û��İ���
    do
    {
        switch(nChar)
        {
        case 1:///��һ�� �ɵڶ��������һ�� �ɵ����������һ��
            ch1='>'; ch2=' '; ch3=' '; ch4=' '; a=2;
            break;
        case 2:///�ɵ�һ������ڶ��� �ɵ���������ڶ���
            ch1=' '; ch2='>'; ch3=' '; ch4=' '; a=8;
            break;
        case 3:///�ɵڶ������������ �ɵ��������������
            ch1=' '; ch2=' '; ch3='>'; ch4=' '; a=16;
            break;
        case 4:///�ɵ�һ����������� �ɵ��������������
            ch1=' '; ch2=' '; ch3=' '; ch4='>'; a=0;
            break;
        default:
            ch1='>'; ch2=' '; ch3=' '; ch4=' '; a=2;
            break;
        }
        printf("\n");
        printf("    ****************************\n");
        printf("    *                          *\n");
        printf("    *  %cʮ������ת��������     *\n",ch1);
        printf("    *  %cʮ������ת�˽�����     *\n",ch2);
        printf("    *  %cʮ������ת16������     *\n",ch3);
        printf("    *  %c�˳�                   *\n",ch4);
        printf("    *                          *\n");
        printf("    ****************************\n");
        printf("    �����·�����л�����ѡ��󣬰��س�����...\n");
        printf("    ");
        do///����Ƿ����������
        {
            cPress=getch();
        }while(cPress!=13&&cPress!=72&&cPress!=80);
        if (cPress==13)
        {
            if (a!=0)
            {
                system("cls");
                printf("��ѡ����ʮ������ת %d ������...\n",a);
                printf("����������Ҫת��������:\n"); scanf("%d",&n);
                Change(a,n);
                printf("\n���س����ز˵�...\n"); getch(); system("cls");
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
/*void Two(int n);///������ת��
void Eight(int n);///�˽���ת��
void Sixteen(int n);///ʮ������ת��*/
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
/*int Choose(void);///�ı�ch1,ch2,ch3,ch4��ֵ���ߵ���Change()����
int Choose(void)
{
    char cPress;///�����û��İ�����Ϊ
    int a;///���ƹ��ܵ�ʵ��
    ///int nChar;///���ڵ���ѡ��ǰ���ַ�
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
