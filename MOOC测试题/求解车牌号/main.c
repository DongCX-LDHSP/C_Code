#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int n;
    int flag=0;
    for(a=1;a<=9;a++)
    {
        for(b=0;b<a;b++)
        {
            for(n=31;n<100;n++)
            {
                if(a*1000+a*100+b*10+b==n*n)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(b==a)
        {
            for(++b;b>a&&b<=9;b++)
            {
                for(n=32;n<100;n++)
                {
                    if(a*1000+a*100+b*10+b==n*n)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                {
                    break;
                }
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==1)
    {
        printf("³µÅÆºÅÎª£º%d",n*n);
    }
    return 0;
}
