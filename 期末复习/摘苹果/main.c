#include <stdio.h>
#include <stdlib.h>

int GetApple(int a[], int height, int n);
///函数参数：数组a保存苹果到地面的高度；
///           height代表陶陶把手伸直时能达到的最大高度；
///           n为苹果数
///函数功能：计算淘淘能摘到的苹果数目
int GetApple(int a[], int height, int n)
{
    int chair=30;
    int i;
    for(i=0;i<10;i++)
    {   if(height>=a[i])
        {
            n++;
        }
        else if(height+chair>=a[i])
        {
            n++;
        }
    }
    printf("%d",n);
    return 0;
}
int main()
{
    int a[10];
    int i;
    int height;
    int n=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&height);
    GetApple(a,height,n);
    return 0;
}
