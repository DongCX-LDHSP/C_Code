///��°ͺղ��룺��һ����2��ż������д����������֮�͡�
///�����ܣ���֤1000���ڵ�ż�����ֽܷ�����������ĺ�
#include <stdio.h>
#include <stdlib.h>

int IfPrime(int i);
int IfPrime(int i)
{
    int j;
    int flag=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            flag=1;
        }
    }
    return flag;
}
int main()
{
    int i;///�洢��1������
    int n;
    int flag1,flag2;
    int sum=0;///��¼����������ż���ĸ���
    for(n=4;n<=1000;n++)
    {
        if(n%2==0)
        {   for(i=2;i<n;i++)
            {
                flag1=IfPrime(i);
                if(flag1==0)
                {
                    flag2=IfPrime(n-i);
                    if(flag2==0)
                    {
                        sum++;
                        break;
                    }
                }
            }
        }
    }
    if(sum==499)
    {
        printf("�����֤��");
    }
    else
    {
        printf("���ⲻ������");
    }
    return 0;
}
