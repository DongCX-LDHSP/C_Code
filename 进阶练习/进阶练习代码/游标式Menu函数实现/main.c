#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char ch1,ch2,ch3,ch4;///�洢ѡ��ǰ���ַ�
    int a;///���ƽ���ת��������
    ///int n;,�뺯���ľ��幦����أ���ת������
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
                /*printf("��ѡ����ʮ������ת %d ������...\n",a);
                printf("����������Ҫת��������:\n"); scanf("%d",&n);
                Change(a,n);
                printf("\n���س����ز˵�...\n"); getch(); system("cls");*/
            }
            else
            {
                system("cls");
                return 0;
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
