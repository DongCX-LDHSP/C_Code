#include <stdio.h>
#include <stdlib.h>
#define M 20

void Insert(int a[M], int size, int x);
int main()
{
    int number[M];
    int nSize, nInsert;
    int i;
    printf("Input array size:\n");
    scanf("%d", &nSize);
    printf("Input array:\n");
    for (i=0; i < nSize; i++)
    {
        scanf("%d", &number[i]);
    }
    printf("Input x:\n");
    scanf("%d", &nInsert);
    Insert( number, nSize, nInsert);
    printf("After insert %d:\n",nInsert);
    for (i = 0; i < nSize + 1;i++)
        printf("%4d", number[i]);
    return 0;
}

void Insert(int a[M], int size, int x)
{
    int temp[M];
    int i, j, k, if_exit = 1;
    for (i = 0; i < size && if_exit; i++)
    {
        if(x < a[i])
            if_exit = 0;
    }
    k = --i;
    if (if_exit==0)
        for (j = 0; k < size; j++, k++)
        {
            temp[j] = a[k];
        }
    a[i] = x;
    for (i++, j=0; i < size + 1;i++, j++)
        a[i] = temp[j];
}
