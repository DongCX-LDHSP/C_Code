#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum,dev3,dev5,dev7;
    printf("�밴˳����������һ�ţ�����һ�ź�����һ��ʱ������\n");
    scanf("%d%d%d",&dev3,&dev5,&dev7);
    sum=(70*dev3+21*dev5+15*dev7)%105;
    printf("%d",sum);
    return 0;
}
