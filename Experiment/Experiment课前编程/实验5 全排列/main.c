#include <stdio.h>
#define SWAP(a,b,c) ((c)=(a),(a)=(b),(b)=(c))
///ʵ�������������൱��һ��������С�����ǹؼ�

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
    if(i==n)///�����������������
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
            ///ÿ�ν�ÿһ��Ԫ�����һλ��Ԫ�ػ�������ʹÿ��Ԫ�ض������ڵ�һλһ��
            perm(array,i+1,n);
            ///�Գ�ǰһ��Ԫ�صĺ���Ԫ�ؽ���ȫ����
            SWAP(array[i],array[j],temp);
            ///���������Ԫ����ȫ����֮���ٻ���ԭλ���Է�֮������ظ������
        }
    }
}
