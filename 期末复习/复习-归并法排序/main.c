#include <stdio.h>
#include <stdlib.h>

void Merge(int a[], int left, int m, int right)
{
    int aux[100] = {0};
    int i, j, k;
    ///�ֱ�i,j,kָ����Ե��ײ�
    for(i = left, j = m + 1, k = 0; k <= right - left; k++)
        ///��i�����һ�������β�������ڶ�����������Ԫ�ظ��Ƶ���ʱ������
        if(i == m + 1)
            aux[k] = a[j++];
        else if(j == right + 1)
            aux[k] = a[i++];
        else if(a[i] < a[j])
            aux[k] = a[i++];
        else
            aux[k] = a[j++];
    ///���������ʱ�������a��
    for(i = left, j = 0; i <= right; i++, j++)
        a[i] = aux[j];
}

void MergeSort(int a[], int start, int end)
{
    if(start < end)
    {
        int i;
        i = (end + start) / 2;
        MergeSort(a, start, i);
        MergeSort(a, i + 1, end);
        Merge(a, start, i, end);
    }
}

int main()
{
    int a[100];
    int i;
    for(i = 0; i < 100; i++)
        a[i] = rand() % 999 + 1;
    MergeSort(a, 0, 99);
    for(i = 0; i < 100; i++)
        printf("%4d", a[i]);
    return 0;
}
