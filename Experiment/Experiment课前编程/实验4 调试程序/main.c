#include <stdio.h>
#include <stdlib.h>

#define N 10
int main()
{
    int i,nNum,nData[]={12,15,23,29,30,31,34,45,56,70};             /*nNum��ű����ҵ�����������data�����������*/
    int nLow=0,nHigh=N-1,nMid;                                      /*nLow��nHigh��nMid�ֱ��ǲ���������½���Ͻ缰�м�λ��*/
    printf("\nplease input num:\n");
    scanf("%d",&nNum);                                              /*����Ҫ����*/
    printf("the sorted numbers are:\n");
    for(i=1;i<N;i++)
    {
        printf("%d ",nData[i]);                                     /*�����������*/
    }
    while(nLow<nHigh)                                               /*ʹ���۰뷨��������*/
    {
        nMid=(nLow+nHigh)/2;
        if(nNum==nData[nMid])
        {
            printf("\nFind %d,it is nData[%d]!",nNum,nMid);
            break;                                                  /*��nNum���������м���������ҳɹ�*/
        }
        else if(nNum>nData[nMid])
        {
            nLow=nMid+1;                                            /*��nNum�����м����ݣ�nLow����nMid+1*/
        }
        else
        {
            nHigh=nMid-1;                                           /*��nNumС���м����ݣ�nLow����nMid-1*/
        }
    }
    if(nLow>=nHigh)
    {
        printf("\n %d is not in nData[]",nNum);                     /*��nLow����nHigh�������ʧ��*/
    }
    return 0;
}
