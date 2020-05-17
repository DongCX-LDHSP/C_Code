#include <stdio.h>
#include <stdlib.h>

int Combine(int x,int y);
int Combine(int x,int y)
{
    int a,b,c,d;///输出acdb
    a=x/10;
    b=x%10;
    c=y/10;
    d=y%10;
    return a*1000+c*100+d*10+b;
}
int main()
{
    int x,y;
    int combine;
    printf("Input x,y:\n");
    scanf("%d,%d",&x,&y);///以英文逗号隔开
    combine=Combine(x,y);
    printf("%d\n",combine);
    return 0;
}
