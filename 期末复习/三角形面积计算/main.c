#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define area sqrt((s)*(s-a)*(s-b)*(s-c))
int main()
{
    int a,b,c;
    int s;
    printf("请输入三边长\n");
    scanf("%d%d%d",&a,&b,&c);///以空格隔开
    s=(a+b+c)/2;
    printf("%f",area);
    return 0;
}
