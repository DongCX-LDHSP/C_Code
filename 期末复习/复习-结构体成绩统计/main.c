#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Performance
{
    char number[15];
    int Math,Chinese,English,nSum;
    float Aver;
}Grade[3];
int main()
{
    int i,j,temp;
    char tempNum[15];
    float tempAver;
    for(i=0;i<3;i++)
    {
        fflush(stdin);
        printf("������� %d ��ѧ����ѧ�ţ�",i+1);
        gets(Grade[i].number);
        printf("������� %d ��ѧ������ѧ�ɼ���",i+1);
        scanf("%d",&Grade[i].Math);
        printf("������� %d ��ѧ�������ĳɼ���",i+1);
        scanf("%d",&Grade[i].Chinese);
        printf("������� %d ��ѧ����Ӣ��ɼ���",i+1);
        scanf("%d",&Grade[i].English);
        Grade[i].nSum=Grade[i].Math+Grade[i].Chinese+Grade[i].English;
        Grade[i].Aver=(float)Grade[i].nSum/3;
    }
    for(i=0;i<3;i++)
        for(j=1;j<3-i;j++)
            if(Grade[j].nSum>Grade[j-1].nSum)
            {
                temp=Grade[j].Math;     Grade[j].Math=Grade[j-1].Math;      Grade[j-1].Math=temp;
                temp=Grade[j].Chinese;     Grade[j].Chinese=Grade[j-1].Chinese;      Grade[j-1].Chinese=temp;
                temp=Grade[j].English;     Grade[j].English=Grade[j-1].English;      Grade[j-1].English=temp;
                temp=Grade[j].nSum;     Grade[j].nSum=Grade[j-1].nSum;      Grade[j-1].nSum=temp;
                tempAver=Grade[j].Aver;     Grade[j].Aver=Grade[j-1].Aver;      Grade[j-1].Aver=tempAver;
                strcpy(tempNum,Grade[j].number);    strcpy(Grade[j].number,Grade[j-1].number);    strcpy(Grade[j-1].number,tempNum);
            }
    printf("            ѧ��  ��ѧ  ����  Ӣ��  �ܷ�  ƽ����\n");
    for(i=0;i<3;i++)
        printf("%15s  %4d  %4d  %4d  %4d  %6.2f\n",Grade[i].number,Grade[i].Math,Grade[i].Chinese,Grade[i].English,Grade[i].nSum,Grade[i].Aver);
    return 0;
}
