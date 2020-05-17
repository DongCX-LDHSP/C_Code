#include <stdio.h>
#include <stdlib.h>

#define N 10
int main()
{
    int i,nNum,nData[]={12,15,23,29,30,31,34,45,56,70};             /*nNum存放被查找的整数，数组data存放有序数列*/
    int nLow=0,nHigh=N-1,nMid;                                      /*nLow、nHigh和nMid分别标记查找区间的下界和上界及中间位置*/
    printf("\nplease input num:\n");
    scanf("%d",&nNum);                                              /*输入要数据*/
    printf("the sorted numbers are:\n");
    for(i=1;i<N;i++)
    {
        printf("%d ",nData[i]);                                     /*输出有序数列*/
    }
    while(nLow<nHigh)                                               /*使用折半法查找数据*/
    {
        nMid=(nLow+nHigh)/2;
        if(nNum==nData[nMid])
        {
            printf("\nFind %d,it is nData[%d]!",nNum,nMid);
            break;                                                  /*若nNum等于数列中间数据则查找成功*/
        }
        else if(nNum>nData[nMid])
        {
            nLow=nMid+1;                                            /*若nNum大于中间数据，nLow等于nMid+1*/
        }
        else
        {
            nHigh=nMid-1;                                           /*若nNum小于中间数据，nLow等于nMid-1*/
        }
    }
    if(nLow>=nHigh)
    {
        printf("\n %d is not in nData[]",nNum);                     /*若nLow大于nHigh，则查找失败*/
    }
    return 0;
}
