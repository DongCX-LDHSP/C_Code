/*����˵��
����һ�д洢���
��֮��ÿһ�зֱ�洢���ġ���ѧ��Ӣ��ܷ�
���ɼ����û����룬�ܷ��ɳ�����ɼ���
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
    printf("�밴˳������ÿ����Ա�ı�ţ�\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",*pNum+i);
    }
    printf("�밴˳���������ĳɼ���\n");
    for(i=0;i<N;i++)
    {
        scanf("%f",*pFChinese+i);
    }
    printf("�밴˳��������ѧ�ɼ���\n");
    for(i=0;i<N;i++)
    {
        scanf("%f",*pFMath+i);
    }
    printf("�밴˳������Ӣ��ɼ���\n");
    for(i=0;i<N;i++)
    {
        scanf("%f",*pFEnglish+i);
    }
    for(i=0;i<N;i++)
    {
        *(*pFt+i)=*(*pFChinese+i)+*(*pFMath+i)+*(*pFEnglish+i);
    }
    printf("--------------�ܷ�--------------\n");
    for(i=0;i<N;i++)///������
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
