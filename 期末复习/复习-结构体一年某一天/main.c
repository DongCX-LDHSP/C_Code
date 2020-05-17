#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int nYear,nMonth,nDay;
}DATE;
int main()
{
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31},i;
    DATE Get;
    int Which_Day=0;
    printf("Input Year-Month-Day,such as:2019-01-07\n");
    scanf("%d-%d-%d",&Get.nYear,&Get.nMonth,&Get.nDay);
    if(Get.nYear%400==0||(Get.nYear%4==0&&Get.nYear%100!=0))
        month[1]++;
    for(i=0;i<Get.nMonth-1;i++)
        Which_Day+=month[i];
    Which_Day+=Get.nDay;
    printf("%d月%d日是%d年的第%d天。",Get.nMonth,Get.nDay,Get.nYear,Which_Day);
    return 0;
}
