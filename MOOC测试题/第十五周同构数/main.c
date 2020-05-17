#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void depart(int num,int a[2],int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        a[i]=num%10;
        num/=10;
    }
}
int calculate_len(int m)
{
    int i=0;
    do
    {
        m/=10;
        i++;
    }while(m!=0);
    return i;
}
int main()
{
    int i,m,len,temp[2]={0},right;
    for(m=1;m<100;m++)
    {
        right=0;
        len=calculate_len(m);
        depart(m*m,temp,len);
        for(i=0;i<len;i++)
            right+=(int)pow(10,i)*temp[i];
        if(m==right)
            printf("m=%3d\t\tm*m=%6d\n",m,m*m);
    }
    return 0;
}
