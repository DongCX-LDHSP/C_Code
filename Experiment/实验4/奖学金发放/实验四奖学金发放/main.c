#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a[10],b[10],c[10];///a���ڴ洢ѧ�ţ�b���ڴ洢�ɼ���c���ڴ洢����
    int i;
    float aver=0;
    srand(time(0));
    for(i=0;i<10;i++)
    {
        a[i]=1811101+i;
        b[i]=rand()%100+1;
    }
    for(i=0;i<10;i++)
    {
        aver+=b[i];
    }
    printf(" 10��ѧ���ĳɼ��ֱ�Ϊ��\n");
    for(i=0;i<10;i++)
    {
        printf("%4d",b[i]);
    }
    printf("\n\n");
    aver=aver/10;
    printf(" ��һ�Ƚ�����ͷ���:%.2f\n",1.1*aver);
    printf(" ����Ƚ�����ͷ���:%.2f\n",1.05*aver);
    for(i=0;i<10;i++)
    {
        if(b[i]>1.1*aver)
        {
            c[i]=1;
        }
        else if(b[i]>1.05*aver)
        {
            c[i]=2;
        }
        else
        {
            c[i]=0;
        }
    }
    printf("\n   ѧ��    �ɼ�    ����   \n");
    for(i=0;i<10;i++)
    {
        printf("%8d  %4d    ",a[i],b[i]);
        if(c[i]==1)
        {
            printf("һ�Ƚ�\n");
        }
        else if(c[i]==2)
        {
            printf("���Ƚ�\n");
        }
        else
        {
            printf("�޽���\n");
        }
        printf("\n");
    }
    return 0;
}
