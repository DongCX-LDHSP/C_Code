#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define s (float)((a)+(b)+(c))/2
#define area(a,b,c) sqrt((s)*((s)-(a))*((s)-(b))*((s)-(c)))

int main()
{
    int a,b,c;
    printf("�������������ߵĳ��ȣ���Ӣ�Ķ��Ÿ���\n");
    scanf("%d,%d,%d",&a,&b,&c);
    printf("�����ε�����ǣ�%.3f",area(a,b,c));
    return 0;
}
