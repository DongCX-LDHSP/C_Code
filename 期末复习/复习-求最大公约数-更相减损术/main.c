#include <stdio.h>

int Max_Common_Divisor(int m,int n)
{
    int i=1;
    if(m!=n)
    {
        for(i=1;m%2==0&&n%2==0;i*=2)
        {
            m/=2;
            n/=2;
        }
        while(m!=n)
        {
            m=m>n?m-n:m;
            n=m>=n?n:n-m;
        }
    }
    return i*m;
}
int main()
{
    int m,n;
    printf("Input m,n:\n");
    scanf("%d,%d",&m,&n);
    printf("%d",Max_Common_Divisor(m,n));
    return 0;
}
