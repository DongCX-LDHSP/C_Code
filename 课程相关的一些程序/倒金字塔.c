#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cCapital;
    int number,i,j,k;
    printf("Please input a capital:\n");
    scanf("%c",&cCapital);
    number=cCapital-64;
    for(;number>=1;number--)//�������������
    {
        for(i=1;i<=number;i++)//��������Ŀո���
        {
            printf(" ");
        }
        for(j=1;j<=number;j++)//�����ַ��������
        {
            printf("%c",(j+64));
        }
        for(k=number-1;k>=1;k--)//�����ַ��������
        {
            printf("%c",k+64);
        }
        printf("\n");//ÿ���һ���ַ���һ����
    }

    return 0;
}