#include <stdio.h>
#include <stdlib.h>
#include <time.h>
///当前实现的是升序排列
int main()
{
    int a[100];
    int i , j, col, temp;
    srand(time(0));
    for(i = 0; i < 100; i++)
        a[i] = rand() % 999 + 1;
    for(col = j = 0; j < 100; j++, col = j)
    {
        for(i = j + 1; i < 100; i++)
            if(a[i] < a[col])
                col = i;
        temp = a[j];
        a[j] = a[col];
        a[col] = temp;
    }
    for(i = 0; i < 100; i++)
        printf("%4d", a[i]);
    return 0;
}
