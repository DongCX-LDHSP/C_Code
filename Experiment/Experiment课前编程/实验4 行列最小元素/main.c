///求二维数组（小于10x10）中这样一个位置：在行上最小，
///在列上也最小。如果没有这样的元素则输出“没有这样的元素”。
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a[10][10];
    int i,j,k,l;
    int m;///存储行最小的行标
    int flag=1;
    int count=0;///记录是否输出
    srand(time(0));
    for(i=0;i<10;i++)///对a[i][j]随机赋值
    {
        for(j=0;j<10;j++)
        {
            a[i][j]=rand()%100+1;///可在此修改随机数的生成范围
        }
    }
    for(i=0;i<10;i++)///该循环旨在获得每个元素的值，便于判断程序的正确性
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
        for(j=0,k=j;j<9;j++)///寻找行最小
        {
            if(a[i][k]>a[i][j+1])
            {
                k=j+1;
                j=-1;
            }
        }
        m=i;
        for(l=0;l<10;l++)///判断是否列最小
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
        printf("没有这样的元素\n");
    }
    return 0;
}
