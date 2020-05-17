/*程序说明
·第一行存储编号
·之后每一行分别存储语文、数学、英语、总分
·成绩由用户输入，总分由程序完成计算
*/
#include <stdio.h>
#include <stdlib.h>
#define M 5
#define N 4

int main()
{
    int i;
    double store[M][N]={{0},{0},{0},{0},{0}};
    int (*pNum)[N]=&store[0];
    float (*pFChinese)[N]=&store[1];
    float (*pFMath)[N]=&store[2];
    float (*pFEnglish)[N]=&store[3];
    double (*pFt)[N]=&store[4];
    printf("请按顺序输入每个成员的编号：\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",*pNum+i);
    }
    printf("请按顺序输入语文成绩：\n");
    for(i=0;i<N;i++)
    {
        scanf("%f",*pFChinese+i);
    }
    printf("请按顺序输入数学成绩：\n");
    for(i=0;i<N;i++)
    {
        scanf("%f",*pFMath+i);
    }
    printf("请按顺序输入英语成绩：\n");
    for(i=0;i<N;i++)
    {
        scanf("%f",*pFEnglish+i);
    }
    for(i=0;i<N;i++)
    {
        *(*pFt+i)=*(*pFChinese+i)+*(*pFMath+i)+*(*pFEnglish+i);
    }
    printf("--------------总分--------------\n");
    for(i=0;i<N;i++)///输出编号
    {
        printf("%8d",*(*pNum+i));
    }
    printf("\n");
    for(i=0;i<N;i++)
    {
        printf("%8.2f",*(*(pFt)+i));
    }
    printf("\n--------------------------------");
    return 0;
}
