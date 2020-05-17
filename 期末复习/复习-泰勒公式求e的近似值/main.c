#include <stdio.h>
#include <stdlib.h>

int Cal_Stair(int n,int a)
{
    if(n==0||n==1)
        return a;
    return Cal_Stair(n-1,a*n);
}
double Exp(void)
{
    int i;
    double temp=1,e=0;
    for(i=0;temp>0.0001;i++)
    {
        temp=(double)1/Cal_Stair(i,1);
        e+=temp;
    }
    return e;
}
int main()
{
    printf("%f",Exp());
    return 0;
}
