///���ά���飨С��10x10��������һ��λ�ã���������С��
///������Ҳ��С�����û��������Ԫ���������û��������Ԫ�ء���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a[10][10];
    int i,j,k,l;
    int m;///�洢����С���б�
    int flag=1;
    int count=0;///��¼�Ƿ����
    srand(time(0));
    for(i=0;i<10;i++)///��a[i][j]�����ֵ
    {
        for(j=0;j<10;j++)
        {
            a[i][j]=rand()%100+1;///���ڴ��޸�����������ɷ�Χ
        }
    }
    for(i=0;i<10;i++)///��ѭ��ּ�ڻ��ÿ��Ԫ�ص�ֵ�������жϳ������ȷ��
    {
        for(j=0;j<10;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<9;i++)
    {
        flag=1;
        for(j=0,k=j;j<9;j++)///Ѱ������С
        {
            if(a[i][k]>a[i][j+1])
            {
                k=j+1;
                j=-1;
            }
        }
        m=i;
        for(l=0;l<10;l++)///�ж��Ƿ�����С
        {
            if(a[m][k]>a[l][k])
            {
                flag=0;
            }
        }
        if(flag)
        {
            printf("%d\n",a[m][k]);
            count=1;
        }
    }
    if(!count)
    {
        printf("û��������Ԫ��\n");
    }
    return 0;
}
