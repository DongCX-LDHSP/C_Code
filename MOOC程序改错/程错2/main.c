#include <stdio.h>
#include <math.h>
int main()
{
    int n,i;
    printf("Input n:\n");
    scanf("%d",&n);
    if(n>1)
    {
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                printf("No!\n");
                break;
            }
            else
            {
                continue;
            }

        }
        if(n%i!=0)//��һ�������Ƿ�������������ж������˳�ѭ��ʱ��i�������Ƿ�=0�����ǣ���������

        {
            printf("Yes!\n");
        }
        else
        {
        }
    }
    else
    {
        printf("No!\n");
    }
    return 0;
}
