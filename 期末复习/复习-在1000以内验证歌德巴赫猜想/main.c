#include <stdio.h>
#include <stdlib.h>
/*Explanation of this program
��°ͺղ��룺�������2��ż�����������ĺ�
1000���ڵ���ż�����ֽܷ�Ϊ��������֮��*/
int IsPrime(int m)
{
    for(int i=2;i*i<=m;i++)
        if(m%i==0)
            return 0;
    return 1;
}
int main()
{
    for(int i=4;i<=1000;i+=2)
    {
        for(int j=2,k=i-j,r1,r2;j<i;j++,k=i-j)
        {
            r1=IsPrime(j);
            r2=IsPrime(k);
            if(r1==1&&r2==1)
            {
                printf("%d = %d + %d\n",i,j,k);
                break;
            }
        }
    }
    return 0;
}
