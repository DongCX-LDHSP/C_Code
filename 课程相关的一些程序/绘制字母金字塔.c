#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cCapital;
    int number,i,j,k,m=0;
    printf("Please input a capital:\n");
    scanf("%c",&cCapital);
    number=cCapital-64;
    for(;number>=1;)//�������������
    {
        for(;m<=number;number--)
        {
            for(i=1;i<=number;i++)//��������Ŀո���
            {
                printf(" ");
            }
            for(j=1;j<=m&&m<=number;j++)//�����ַ��������
            {
                printf("%c",(j+64));
            }
            for(k=m;k<m;k--)//�����ַ��������
            {
                printf("%c",k+64);
            }
            printf("\n");//ÿ���һ���ַ���һ����
            m++;
        }
    }
    return 0;
}
