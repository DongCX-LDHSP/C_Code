#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nNum,nMask;//定义两个变量
    printf("Input an integer number:");
    scanf("%d",&nNum);
    nNum=nNum>>8;
    nMask=~(~0<<4);
    printf("result=0x%x\n",nNum&nMask);
    return 0;
}
