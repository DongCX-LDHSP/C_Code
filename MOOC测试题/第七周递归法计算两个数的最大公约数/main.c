#include <stdio.h>
#include <stdlib.h>

int Gcd(a,b);
int Gcd(a,b)
{
    if(a==b)
        return a;
    if(a>b)
        return Gcd(a-b,b);
    if(a<b)
        return Gcd(a,b-a);
}
int main()
{
    int a,b;
    printf("Input a,b:");
    scanf("%d,%d",&a,&b);
    if(a<=0||b<=0)
        printf("Input error!\n");
    else
        printf("%d\n",Gcd(a,b));
    return 0;
}
