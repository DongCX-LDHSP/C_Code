#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define area sqrt((s)*(s-a)*(s-b)*(s-c))
int main()
{
    int a,b,c;
    int s;
    printf("���������߳�\n");
    scanf("%d%d%d",&a,&b,&c);///�Կո����
    s=(a+b+c)/2;
    printf("%f",area);
    return 0;
}
