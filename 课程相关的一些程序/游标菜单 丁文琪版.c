#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void Change(int x,int n);///����ת��������x�Ǵ�ת����
void Printscreen();///��Ӧ���ҵ�Menu����
int Backscreen(int n);///���ز˵�����
int Printoption(int n);///����û�ѡ��Ĺ��ܣ������û������ת������

int Printoption(int n)///����û�ѡ��Ĺ��ܣ������û������ת������
{
    int x;
    system("cls");
    switch(n)
    {
        case 6:printf("��ѡ��Ĺ���Ϊʮ������ת��������\n");break;
        case 7:printf("��ѡ��Ĺ���Ϊʮ������ת�˽�����\n");break;
        case 8:printf("��ѡ��Ĺ���Ϊʮ������ת16������\n");break;
    }
    printf("��������Ҫת����ʮ��������");
    scanf("%d",&x);
    switch(n)
    {
        case 6:printf("ת���õ��Ķ�������Ϊ��");break;
        case 7:printf("ת���õ��İ˽�����Ϊ��");break;
        case 8:printf("ת���õ���16������Ϊ��");break;
    }
    return x;
}

int Backscreen(int n)///���ز˵�����
{
    int a;
    printf("\n���س������ز˵�����");
    while(a!=13) a=getch();
    switch(n)
    {
        case 6:n=1;break;
        case 7:n=2;break;
        case 8:n=3;break;
    }
    return n;
}

void Printscreen(int c1,int c2,int c3,int c4)///�����ʽMenu
{
    system("cls");
    printf("*******************************\n");
    printf("*                             *\n");
    printf("*     %cʮ������ת��������     *\n",c1);
    printf("*     %cʮ������ת�˽�����     *\n",c2);
    printf("*     %cʮ������ת16������     *\n",c3);
    printf("*            %c�˳�            *\n",c4);
    printf("*                             *\n");
    printf("*******************************\n\n");
    printf("˵��:�����·�����ı�ѡ����س���ѡ����");
    return;
}

void Change(int x,int n)///����ת��������x�Ǵ�ת����
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
                    case 13:{///���뵱ǰѡ��
                              n=6,a=0;
                              x=Printoption(n);///��ô�ת������
                              Change(x,n);///ʵ�ֽ���ת�������
                              n=Backscreen(n);///ǿ���û�ѡ�񷵻ز˵�
                              break;
                            }
                    case 72:{c1=' ',c4='>';n=4;break;}///����ѡ��
                    case 80:{c1=' ',c2='>';n=2;break;}///����ѡ��
                }
                break;
            }

            if(n==2)
            {
                a=getch();
                switch(a)
                {
                    case 13:{///���뵱ǰѡ��
                              n=7,a=0;
                              x=Printoption(n);///��ô�ת������
                              Change(x,n);///ʵ�ֽ���ת�������
                              n=Backscreen(n);///ǿ���û�ѡ�񷵻ز˵�
                              break;
                            }
                    case 72:{c1='>',c2=' ';n=1;break;}///����ѡ��
                    case 80:{c2=' ',c3='>';n=3;break;}///����ѡ��
                }
                break;
            }

            if(n==3)
            {
                a=getch();
                switch(a)
                {
                    case 13:{///���뵱ǰѡ��
                              n=8,a=0;
                              x=Printoption(n);///��ô�ת������
                              Change(x,n);///ʵ�ֽ���ת�������
                              n=Backscreen(n);///ǿ���û�ѡ�񷵻ز˵�
                              break;
                            }
                    case 72:{c2='>',c3=' ';n=2;break;}///����ѡ��
                    case 80:{c3=' ',c4='>';n=4;break;}///����ѡ��
                }
                break;
            }

            if(n==4)
            {
                a=getch();
                switch(a)
                {
                    case 13:{return 0;}///���뵱ǰѡ��
                    case 72:{c3='>',c4=' ';n=3;break;}///����ѡ��
                    case 80:{c1='>',c4=' ';n=1;break;}///����ѡ��
                }
                break;
            }
        }
    }
}
