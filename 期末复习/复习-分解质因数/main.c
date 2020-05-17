#include <stdio.h>
#include <stdlib.h>

int IsPrime(int m)
{
    for(int i=2; i<=m/2; i++)
        if(m%i==0)
            return 0;
    return 1;
}
int main()
{
    int nNum,i;
    printf("请输入待分解的数：");
    scanf("%d",&nNum);
    printf("%d=",nNum);
    for(i=2; nNum!=1; i++)
        if(IsPrime(i))
            if(nNum%i==0)
            {

                nNum=nNum/i;
                if(nNum!=1)
                {
                    printf("%d*",i);
                    i=1;
                }
            }
    printf("%d",--i);
    return 0;
}
