#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count_num[10]={0};
    int nFeedback[40];
    int i,j=0,mean=0,median=0,mode=0,temp;
    int nPos;
    printf("Input the feedbacks of 40 students:\n");
    for(i=0;i<40;i++)
    {
        scanf("%d",&nFeedback[i]);
        mean+=nFeedback[i];
    }
    mean/=40;
    printf("Mean value=%d\n",mean);
    do
    {
        j++;
        i=-1;
        do
        {
            if(nFeedback[i]<nFeedback[i+1])
            {
                temp=nFeedback[i];
                nFeedback[i]=nFeedback[i+1];
                nFeedback[i+1]=temp;
            }
            i++;
        }while(i<40-j);
    }while(j<39);
    median=(nFeedback[19]+nFeedback[20])/2;
    printf("Median value=%d\n",median);
    for(i=0;i<40;i++)
    {
        switch(nFeedback[i])
        {
            case 1:     count_num[0]++;break;
            case 2:     count_num[1]++;break;
            case 3:     count_num[2]++;break;
            case 4:     count_num[3]++;break;
            case 5:     count_num[4]++;break;
            case 6:     count_num[5]++;break;
            case 7:     count_num[6]++;break;
            case 8:     count_num[7]++;break;
            case 9:     count_num[8]++;break;
            case 10:    count_num[9]++;break;
        }
    }
    nPos=0;
    for(i=0;i<10;i++)
    {
        if(count_num[nPos]<count_num[i+1])
        {
            nPos=i+1;
        }
    }
    mode=nPos+1;
    printf("Mode value=%d\n",mode);
    return 0;
}
