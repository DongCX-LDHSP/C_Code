///�����������ַ����ж�Ӧλ������ͬ���ַ�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100///���޸�N��ֵ�Ի�ò�ͬ��Ч��

int main()
{
    char a[N],b[N];
    int i;
    int counta=0,countb=0,nMincount;
    int flag=0;
    for(i=0;i<N;i++)///��ʼ��a[]��b[]��Ԫ��ȫΪ-1�����ں�������û�������ַ����������ַ�����
    {
        a[i]=-1;
        b[i]=-1;
    }
    srand(time(0));
    printf("���ǵ���Ӣ���ַ�ռ���ֽ����Ĳ�ͬ��ע���л���Ӣ��Ŷ��\n");
    printf("Please input a:");
    gets(a);
    for(i=0;i<N;i++)///���õ����ַ��������Ǹ������ص㣬����a[]���ַ�������
    {
        if(a[i]==-1)
        {
            break;
        }
        counta++;
    }
    printf("Please input b:");
    gets(b);
    for(i=0;i<N;i++)///���õ����ַ��������Ǹ������ص㣬����b[]���ַ�����
    {
        if(b[i]==-1)
        {
            break;
        }
        countb++;
    }
    nMincount=counta>countb?countb:counta;
    for(i=0;i<nMincount;i++)
    {
        if(a[i]==b[i])
        {
            printf("��%dλ���ַ���ͬΪ: %c\n",i+1,a[i]);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("û���������ַ���");
    }
    return 0;
}
