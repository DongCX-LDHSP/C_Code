/*���²鿴�����ķ���*/
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
/*����Ϊ������İ汾
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
*/

/*����Ϊ����������޸İ�
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,j,k,l;//j,k,l��Ϊѭ���������Ʊ���
    int m;//���ڿ�������Ŀո���
    int n;//����whileѭ������
    char a;//�����û�������ַ�
    char b;
    printf("Please input a capital:\n");
    scanf("%c",&a);
    n=a-64;//���ַ�ת��Ϊ��Ӧ��1~26
    m=n;
    while(i<=n)
    {
        b='A';
        for(j=1;j<=m;j++)//����ո�
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)//���������ĸ
        {
            printf("%c",b);
            b++;
        }
        for(l=1;l<=(i-1);l++)//���������ĸ
        {
            printf("%c",(b-2));
            b--;
        }
        i++;
        m--;
        printf("\n");
    }
    return 0;
}
*/
