#include <stdio.h>
#include <stdlib.h>
void setArray(int a[],int n);//�������е�ԭʼ��ʼ��Ϊ-1
void calFactorial(int a[],int len,int n);//��׳ˣ�����Ϊ���顢���鳤�Ⱥ�Ҫ����Ľ׳�
void getFactorial(int a[],int n);//����׳˵�ֵ
void setArray(int a[],int n)
{
    for(int i=0;i<n;i++)a[i]=-1;
}
void calFactorial(int a[],int len,int n)
{
    if(n==0||n==1)
        a[len-1]=1;
    else
    {
        a[len-1]=1;
        int product,k=0,flag=-1;//product���ĳ��λ�ϵ�������˵����Ľ����flag��Ž�λҪ�ӵ�ֵ
        for(int i=2;i<=n;i++)
        {
            for(int j=len-1;a[j]!=-1||flag!=0;j--)//ֻ�е���ǰλ���ϴ�����Ч���ҽ�λ��Ϊ0ʱ���˳�
            {
                if(k==0)
                    flag=0;//��Ϊflag
                if(a[j]!=-1)
                {
                    product=a[j]*i;
                }
                else
                {
                    product=0;//����Ч������Ҫ���Ͻ�λ�����Ƚ�ֵ��Ϊ0
                }
                if(product>=10)
                {
                    a[j]=product%10+flag%10;//�ó˻���λ�ϵ���+��λ��λ�ϵ���
                    flag=flag/10+product/10;//��λ�ϵ�������ɽ�λ����flag/10,Ȼ������µ���Ҫ��λ����
                    if(a[j]>=10)
                    {
                        a[j]=a[j]%10;//ȡ��λ
                        flag+=1;//���ڽ�λ���ͳ˻���λ�ϵ����Ͳ����ܳ���20������ֻ��Ҫ��flag+1����λ����һλ
                    }
                }
                else
                {
                    a[j]=product+flag%10;//��������λ��λ�ģ�ֱ�ӽ��˻��ͽ�λ�����
                    flag/=10;
                }
                k++;
            }
            flag=-1;
            k=0;
        }
    }
}
void getFactorial(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=-1)
            printf("%d",a[i]);
    }
}
int main()
{
    int a[50]={0};
    setArray(a,50);
    calFactorial(a,50,40);
    getFactorial(a,50);
    return 0;
}
