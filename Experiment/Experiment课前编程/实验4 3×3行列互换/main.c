#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

int main()
{
    int a[N][N];
    int b[N][N]={0};///��������
    int i,j;
    ///��ѭ��ּ��Ϊ���� a ����ֵ����Ҫ�����
    ///������ͬ ���Ӻ��� ע�ͣ�������������
    srand(time(NULL));
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            a[i][j]=rand()%100+1;
        }
    }///���˽���
    printf("ԭ����ʽ���£�\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("���л����������ʽ���£�\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
