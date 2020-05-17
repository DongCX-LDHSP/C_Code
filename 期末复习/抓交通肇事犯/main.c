#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,i,j;
    int flag=0;
    for(i=1;i<=9;i++)
    {
        for(j=0;j<=9&&j<i;j++)
        {
            for(m=32;m<=99;m++)
            {
                if(i*1000+i*100+j*10+j==m*m)
                {
                    printf("k=%d,m=%d\n",m*m,m);
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(j==i)
        {
            for(j++;j<=9&&j>i;j++)
            {
                for(m=32;m<=99;m++)
                {
                    if(i*1000+i*100+j*10+j==m*m)
                    {
                        printf("k=%d,m=%d\n",m*m,m);
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
    return 0;
}
