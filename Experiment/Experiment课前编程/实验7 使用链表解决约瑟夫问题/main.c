27人转成一个圈，从第1个人开始顺序报号，凡报号为3和3
的倍数者退出圈子，找出最后留在圈子中的原来的序号
输出格式：最后在圈中的人的序号为：%d
#include <stdio.h>
#include <stdlib.h>

struct Joseph
{
    int a;
    struct Joseph *next;
}array[27];
int main()
{
    int i,count=0;
    for(i=0;i<27;i++)
    {
        array[i].a=i+1;
    }
    array[0].next=&array[1];
    for(i=1;i<26;i++)
    {
        array[i].next=&array[i+1];
    }
    array[26].next=&array[0];

    return 0;
}
