#include <stdio.h>
#include <stdlib.h>
///220 284  1184 1210   2620 2924
int SumY(int i);
int SumY(int i)
{
    int j;
    int sum=0;
    for(j=1;j<i;j++)
    {
        if(i%j==0)
        {
            sum+=j;
        }
    }
    return sum;
}
int main()
{
    int n;
    int i;///���ж�����
    int a;///�洢i�����Ӻ�
    int b;///�洢i�����Ӻ͵����Ӻ�
    int c=0,d=0;///��ʱ�洢��������
    printf("Input n:\n");
    scanf("%d",&n);
    printf("���������У�\n");
    for(i=1;i<=n;i++)
    {
        a=SumY(i);
        b=SumY(a);
        if(i!=a)
        {
            if(i==b)
            {
                if(i!=d&&c!=a)
                {
                    printf(" %d �� %d\n",i,a);
                    c=i;d=a;
                }
            }
        }
    }
    return 0;
}
