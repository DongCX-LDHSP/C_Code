/*��ˮ�ַ�Ҭ�ӡ��������������ּ��׵�ͨ�⹫ʽ:
         y=a^n-db/c

    y���� ���ֵ�ĳ�������ܸ�����
    a���� ÿ�ηֵ��ܷ���(һ������£���������)�� n
    n���� �ܹ��ֵĴ�����                         n
    c���� ��a�ݺ����ߵķ�����                    1
    b���� ÿ�η�a�ݺ��������                    1
    d���� ÿ�η�a������c�ݺ�ʣ���ٷֵķ�����     n-1
    ע����b��c��Ϊ��Ȼ��ʱ�����ʱ�����޽�, Ҳ��y�޽⡣*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int y;
    printf("Input n(1<n<=5):\n");
    scanf("%d",&n);
    if(n<=1||n>5)
    {
        printf("Error!\n");
    }
    else
    {
        y=pow(n,n)-(n-1);
        printf("y=%d\n",y);
    }
    return 0;
}
