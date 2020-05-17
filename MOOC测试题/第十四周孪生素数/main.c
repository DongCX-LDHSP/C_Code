#include <stdio.h>
#include <stdlib.h>

int IsPrime(int x);
int IsPrime(int x)
{
    int counter;
    for(counter=2;counter<x;counter++)
    {
        if(x%counter==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    long c,d;
    long i;
    long zh1,zh2;
    int r;
    int count=0;
    printf("please input c,d(c>2):\n");
    scanf("%ld,%ld",&c,&d);
    i=c;
    do
    {
        r=IsPrime(i);
        i++;
    }while(r!=1);
    zh1=i-1;
    i++;
    do
    {
        r=IsPrime(i);
        i++;
    }while(r!=1);
    zh2=--i;
    if(zh2-zh1==2)
    {
        printf("(%ld,%ld)\n",zh1,zh2);
        count++;
    }
    do
    {
        zh1=zh2;
        do
        {
            r=IsPrime(i);
            i++;
        }while(r!=1);
        zh2=i-1;
        if(zh2-zh1==2)
        {
            printf("(%ld,%ld)\n",zh1,zh2);
            count++;
        }
    }while(i<=d);
    printf("total=%d\n",count);
    return 0;
}
