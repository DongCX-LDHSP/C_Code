/*���ǵ������ַ���Ӣ���ַ�ռ�õ��ֽڲ�ͬ��
����Ƿ��ַ�ʱ������Ӣ���ַ�Ŷ��*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void Add(void);//�ӷ���ϰ
void Subtraction(void);//������ϰ
void Explanation(void);//����˵��
void Menu(void);//�˵�����
void Add()
{
    int counter;//���������������Ŀ����
    int i=0;//��¼�ش���ȷ�Ĵ���
    int a,b;//��������
    int nAnswer;//�����û��Ĵ�
    int flag;//�������ɼӷ���ϰ��ѭ������
    int R;//�����ж��û��Ƿ���һ�λش���ȷ
    int G;//���ƴ���ѭ������
    int nRightpercent;//���ڴ洢��ȷ��
    printf("�����ڽ��мӷ���ϰ������Ŷ��\n");
    printf("\n");
    for(counter=1;counter<=5;counter++)
    {
        do//��������ļӷ���ϰ���ѭ��
        {
            srand((unsigned)time(0));
            a=rand()%10+0;
            b=rand()%10+0;
            if(a+b>10)
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
        }while(flag);
        printf("%d. �������λ���ش�����⣬��ϸһ��Ŷ��\n",counter);
        R=0;
        G=0;
        do//�ȴ��û�����𰸲����𰸵���ȷ��
        {
            printf("   %d + %d = ",a,b);
            scanf("%d",&nAnswer);
            if(nAnswer==a+b)
            {
                printf("   ����ˣ�Ϊ������뢣�\n");
                break;
            }
            else
            {
                if(R<=1)//��������������Ĵ���
                {
                    printf("   ����ˣ�����һ�ΰɣ����ͣ�\n");
                }
                G++;
                R++;
            }
        }while(G<=2);
        if(!R)//ͳ�ƻش���ȷ�Ĵ���
        {
            i++;
        }
        else if(G==3)
        {
            printf("   ��������Ѵ�3�Σ���ϰ�����ˡ�����ģ������ٳ���Ŷ��\n");
            printf("\n");
            break;
        }
    }
    nRightpercent=i*20;
    printf("   ���������ȷ��Ϊ��%d%%\n",nRightpercent);
    printf("\n");
    printf("   ���س����ز˵�...\n");
    getch();
    system("cls");
    Menu();//����Menu���������ز˵�
}
void Subtraction()
{
    int counter;//���������������Ŀ����
    int i=0;//��¼�ش���ȷ�Ĵ���
    int a,b;//��������
    int nAnswer;//�����û��Ĵ�
    int flag;//�������ɼ�����ϰ��ѭ������
    int R;//�����ж��û��Ƿ���һ�λش���ȷ
    int G;//���ڿ��ƴ���ѭ������
    int nRightpercent;//���ڴ洢��ȷ��
    printf("�����ڽ��м�����ϰ������Ŷ��\n");
    printf("\n");
    for(counter=1;counter<=5;counter++)
    {
        do//��������ļ�����ϰ���ѭ��
        {
            srand((unsigned)time(0));
            a=rand()%10+0;
            b=rand()%10+0;
            if(a-b<=0)
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
        }while(flag);
        printf("%d. �������λ���ش�����⣬��ϸһ��Ŷ��\n",counter);
        R=0;
        G=0;
        do//�ȴ��û�����𰸲����𰸵���ȷ��
        {
            printf("   %d - %d = ",a,b);
            scanf("%d",&nAnswer);
            if(nAnswer==a-b)
            {
                printf("   ����ˣ�Ϊ������뢣�\n");
                break;
            }
            else
            {
                if(R<=1)//��������������Ĵ���
                {
                    printf("   ����ˣ�����һ�ΰɣ����ͣ�\n");
                }
                G++;
                R++;
            }
        }while(G<=2);
        if(!R)//ͳ�ƻش���ȷ�Ĵ���
        {
            i++;
        }
        else if(G==3)
        {
            printf("   ��������Ѵ�3�Σ���ϰ�����ˡ�����ģ������ٳ���Ŷ��\n");
            printf("\n");
            break;
        }
    }
    nRightpercent=i*20;
    printf("   ���������ȷ��Ϊ��%d%%\n",nRightpercent);
    printf("\n");
    printf("   ���س����ز˵�...\n");
    getch();
    system("cls");
    Menu();
}
void Explanation()
{
    printf("\n");
    printf("\n");
    printf("       �����ڲ鿴����˵��\n");
    printf("\n");
    printf("           �ó��������������10���ڵļӼ�����\n");
    printf("       ����ϰ�⣬�û��������Ӧ�����֣�������\n");
    printf("       Ӧ����ϰ���������û��ش����ȷ�ʣ��û�\n");
    printf("       ���������������Ӧ�ķ�Χ�ڣ����򣬲���\n");
    printf("       ʵ����Ӧ�Ĺ��ܡ�\n");
    printf("\n");
    printf("       ���س����ز˵�...\n");
    getch();
    system("cls");
    Menu();
}
void Menu()
{
    int a;//���ڴ洢�û�����Ĳ˵���ǰ������
    int b;//�洢scanf�ķ���ֵ
    printf("\n");
    printf("\n");
    printf("        10���ڼӼ���������ѧ����\n");
    printf("        *****************************\n");
    printf("        *****************************\n");
    printf("        **                         **\n");
    printf("        **       1 �ӷ���ϰ        **\n");
    printf("        **       2 ������ϰ        **\n");
    printf("        **       3 ����˵��        **\n");
    printf("        **       4 �˳�����        **\n");
    printf("        **                         **\n");
    printf("        *****************************\n");
    printf("        *****************************\n");
    printf("����˵���ǰ�����֣�ѡ���ܣ������ֳ����˵��еķ�Χ����ʾ0��\n");
    b=scanf("%d",&a);
    if(b!=1)
    {
        getchar();//������������ַ��ӻ����������
        printf("��ѡ���˹��ܣ�0\n");
        printf("���س����ز˵�...\n");
        getch();
        system("cls");
        Menu();
    }
    switch(a)
    {
        case 1:
            printf("��ѡ���˹��ܣ�1\n");
            printf("���س�������ϰ...\n");
            getch();
            system("cls");
            Add();
            break;
        case 2:
            printf("��ѡ���˹��ܣ�2\n");
            printf("���س�������ϰ...\n");
            getch();
            system("cls");
            Subtraction();
            break;
        case 3:
            printf("��ѡ���˹��ܣ�3\n");
            printf("���س��������˵��...\n");
            getch();
            system("cls");
            Explanation();
            break;
        case 4:
            system("cls");
            break;
        default:
            printf("��ѡ���˹��ܣ�0\n");
            printf("���س����ز˵�...\n");
            getch();
            system("cls");
            Menu();
            break;
    }
}
int main()
{
    Menu();
    return 0;
}
