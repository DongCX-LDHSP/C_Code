#include <stdio.h>
#include <stdlib.h>

///OJ能过，但是本地运行效果却没能达到
typedef struct student
{
    int student_ID,nMath,nChinese,nEnglish,nSum;
    float fAver;
}GRADE;
typedef struct now
{
    int student_ID,nMath,nChinese,nEnglish,nSum;
    float fAver;
}TEMP;
int main()
{
    int i,j;
    GRADE grade[3];
    TEMP temp;
    for(i=0;i<3;i++)
    {
        scanf("%d%d%d%d",&grade[i].student_ID,&grade[i].nMath,
                         &grade[i].nChinese,&grade[i].nEnglish);
        grade[i].nSum=grade[i].nMath+grade[i].nChinese+grade[i].nEnglish;
        grade[i].fAver=grade[i].nSum/3.0;
    }
    do
    {
        j++;
        i=-1;
        do
        {
            i++;
            if(grade[i].nSum<grade[i+1].nSum)
            {
                temp.student_ID=grade[i].student_ID;
                grade[i].student_ID=grade[i+1].student_ID;
                grade[i+1].student_ID=temp.student_ID;
                temp.nMath=grade[i].nMath;
                grade[i].nMath=grade[i+1].nMath;
                grade[i+1].nMath=temp.nMath;
                temp.nChinese=grade[i].nChinese;
                grade[i].nChinese=grade[i+1].nChinese;
                grade[i+1].nChinese=temp.nChinese;
                temp.nEnglish=grade[i].nEnglish;
                grade[i].nEnglish=grade[i+1].nEnglish;
                grade[i+1].nEnglish=temp.nEnglish;
                temp.nSum=grade[i].nSum;
                grade[i].nSum=grade[i+1].nSum;
                grade[i+1].nSum=temp.nSum;
                temp.fAver=grade[i].fAver;
                grade[i].fAver=grade[i+1].fAver;
                grade[i+1].fAver=temp.fAver;
            }
        }while(i<3-j);
    }while(j<3-1);
    for(i=0;i<3;i++)
    {
        printf("%d,%d,%d,%d,%d,%.2f\n",
               grade[i].student_ID,grade[i].nMath,grade[i].nChinese,
               grade[i].nEnglish,grade[i].nSum,grade[i].fAver);
    }
    return 0;
}
