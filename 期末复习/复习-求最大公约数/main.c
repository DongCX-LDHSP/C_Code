#include <stdio.h>

int Max_Common_Divisor(int m,int n)
{
    int i;
    for(i=m>n?n:m;i>=1;i--)
        if(m%i==0&&n%i==0)
            return i;
}
int main()
{
    int m,n;
    printf("Input m,n:\n");
    scanf("%d,%d",&m,&n);
    printf("%d",Max_Common_Divisor(m,n));
    return 0;
}
