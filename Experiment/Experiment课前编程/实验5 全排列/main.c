#include <stdio.h>
#define SWAP(a,b,c) ((c)=(a),(a)=(b),(b)=(c))
///实现三数交换，相当于一个函数，小括号是关键

void perm(int array[3],int i,int n);
int main()
{
    int array[3]={1,2,3};
    perm(array,0,3);
    return 0;
}
void perm(int array[3],int i,int n)
{
    int j,temp;
    if(i==n)///排序结束，将结果输出
    {
        for(j=0;j<n;j++)
        {
            printf("%d",array[j]);
        }
        printf("\n");
    }
    else
    {
        for(j=i;j<n;j++)
        {
            SWAP(array[i],array[j],temp);
            ///每次将每一个元素与第一位的元素互换，以使每个元素都能排在第一位一次
            perm(array,i+1,n);
            ///对除前一个元素的后续元素进行全排列
            SWAP(array[i],array[j],temp);
            ///将互换后的元素在全排列之后再换回原位，以防之后出现重复的情况
        }
    }
}
