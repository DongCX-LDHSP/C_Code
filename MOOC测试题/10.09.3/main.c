#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a,b,c;
    char ch1,ch2;
    ch2='=';//����=
    srand((unsigned)time(NULL));
    a=rand()%(11)+0;//������ɵ� һ �������
    c=rand()%(2)+0;//���� 0 �� 1 �������������switch()�Ĳ���
    switch(c)
    {
    case 0:
        ch1='+';
        break;
    case 1:
        ch1='-';
        break;
    default:
        printf("Please restart the program until you get the right expression!");
        break;
    }//���switch()������Ϊ��������� + �� -
    b=rand()%(11)+0;//������ɵ� �� �������
    if(a+b<=10&&a-b>=0)//�ж�a,b�������Ƿ�����Ҫ��
    {
        printf("%d",a);
        printf("%c",ch1);
        printf("%d",b);
        printf("%c",ch2);
    }
    else
    {
        printf("Please restart the program until you get the right expression!");
        //���������������г���ֱ������һ������ı��ʽ
        //�����ԣ�������ܻ��������������е���������������䣬����ͬѧ����ʱ���Լ���
    }
    return 0;
}
