/*
��Ŀ���ݣ�
Լɪ�����⣺N����Χ��һȦ���ӵ�һ���˿�ʼ����������M���˳�Ȧ��
������һ���˿�ʼ����������M���˳�Ȧ����������γ�Ȧ���˵ı�š�
N��M�ɼ������롣

�����ʽ:
"%d%d"
�����ʽ��
"%d"
����������
5 3
���������
Please input two integers:
31524
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000]={0};
    int N,M;
    int i;
    int count=0;
    int countout=0;
    printf("Please input two integers:\n");
    scanf("%d%d",&N,&M);
    for(i=0;i<N;i++)
    {
        a[i]=i+1;
    }
    do
    {
        for(i=0;i<N;i++)
        {
            if(a[i]!=0)
            {
                count++;
                if(count%M==0)
                {
                    printf("%d",a[i]);
                    a[i]=0;///���Ѿ���������ݽ���ֵ����Ϊ�㣬������ȥ
                    countout++;
                }
            }
        }
    }while(countout<N);
    return 0;
}




/*
            do
            {
                flag=0;
                for(j=0;j<N;j++)
                {
                    if(a[i]==b[j])
                    {
                        i++;
                        j=0;
                        if(!(i<N))
                        {
                            i=i%5;
                        }
                    }
                    else
                    {
                        flag=1;
                    }
                }
            }while(!flag);
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000]={0};
    int b[1000]={0};
    int N,M;
    int i;
    int j;
    int count=1;
    int countout=0;
    int flag=0;
    ///int control;
    scanf("%d%d",&N,&M);
    for(i=0;i<N;i++)
    {
        a[i]=i+1;
    }
    do
    {
        for(i=0;i<N;i++)
        {
            do
            {
                flag=0;
                for(j=0;j<N;j++)
                {
                    if(a[i]==b[j])
                    {
                        i++;
                        j=0;
                        if(!(i<N))
                        {
                            i=i%5;
                        }
                    }
                    else
                    {
                        flag=1;
                    }
                }
            }while(!flag);
            if(count%M==0)
            {
                printf("%d",a[i]);
                b[i]=a[i];
                countout++;
            }
            count++;
        }
    }while(countout<N);
    return 0;
}
*/
