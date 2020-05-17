#include <stdio.h>
#include <stdlib.h>

void Merge(int a[], int left, int m, int right)
{
    int aux[100] = {0};
    int i, j, k;
    ///分别将i,j,k指向各自的首部
    for(i = left, j = m + 1, k = 0; k <= right - left; k++)
        ///若i到达第一个数组的尾部，将第二个数组余下元素复制到临时数组中
        if(i == m + 1)
            aux[k] = a[j++];
        else if(j == right + 1)
            aux[k] = a[i++];
        else if(a[i] < a[j])
            aux[k] = a[i++];
        else
            aux[k] = a[j++];
    ///将有序的临时数组存入a中
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
