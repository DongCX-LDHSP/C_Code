#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Add();//�ӷ���ϰ
int Subtraction();//������ϰ
int Explanation();//����˵��
int Add()
{
    int counter;
    int i;//��¼�ش���ȷ�Ĵ���
    int a,b;//��������
    int flag;//����ѭ������
    for(counter=1;counter<=5;counter++)
    {
        do
        {
            srand((unsigned)time(NULL));
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
    }
}
int Subtraction()
{
    
}
int Explanation()
{
    
}
int main()
{
    printf("10���ڼӼ���������ѧ����\n")
    printf("*****************************\n");
    printf("*****************************\n");
    printf("**                           **\n");
    printf("**        1 �ӷ���ϰ        **\n");
    printf("**        2 ������ϰ        **\n");
    printf("**        3 ����˵��        **\n");
    printf("**        4 �˳�����        **\n");
    printf("**                           **\n");
    printf("*****************************\n");
    printf("*****************************\n");
    return 0;
}
