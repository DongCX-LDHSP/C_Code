#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define s (float)((a)+(b)+(c))/2
#define area(a,b,c) sqrt((s)*((s)-(a))*((s)-(b))*((s)-(c)))

int main()
{
    int a,b,c;
    printf("输入三角形三边的长度，以英文逗号隔开\n");
    scanf("%d,%d,%d",&a,&b,&c);
    printf("三角形的面积是：%.3f",area(a,b,c));
    return 0;
}
