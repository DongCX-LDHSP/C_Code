#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum,dev3,dev5,dev7;
    printf("请按顺序输入三人一排，五人一排和七人一排时的余数\n");
    scanf("%d%d%d",&dev3,&dev5,&dev7);
    sum=(70*dev3+21*dev5+15*dev7)%105;
    printf("%d",sum);
    return 0;
}
