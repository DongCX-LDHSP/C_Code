#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define J 10
#define A 30
typedef struct message
{
    int Anum[A];///��ŵ�i��ѡ�ֵı��
    float finalscore[A];///��ŵ�i��ѡ�ֵ����÷֣���ȥ��һ����߷ֺ�һ����ͷ��Ժ��ƽ����
    int Jnum[J];///��ŵ�j����ί�ı��
    float J_to_A[A][J];///��ŵ�j����ί����i��ѡ�ֵ�����
    float J_Level[J];///��Ŵ����j����ί����ˮ׼�ĵ÷�
}ME;
void sortA(ME *p,int nAthlete);
void sortA(ME *p,int nAthlete)
{
    int i,j=0;
    float tempscore,tempnum;
    do
    {
        j++;
        i=-1;
        do
        {
            i++;
            if((*p).finalscore[i]<(*p).finalscore[i+1])///a[i]Ϊ��������
            {
                tempscore=(*p).finalscore[i];
                (*p).finalscore[i]=(*p).finalscore[i+1];
                (*p).finalscore[i+1]=tempscore;
                tempnum=(*p).Anum[i];
                (*p).Anum[i]=(*p).Anum[i+1];
                (*p).Anum[i+1]=tempnum;
            }
        }while(i<nAthlete-j);
    }while(j<nAthlete-1);///nΪԪ������
}
void sortJ(ME *p,int nJudge);
void sortJ(ME *p,int nJudge)
{
    int i,j=0;
    float tempscore,tempnum;
    do
    {
        j++;
        i=-1;
        do
        {
            i++;
            if((*p).J_Level[i]<(*p).J_Level[i+1])///a[i]Ϊ��������
            {
                tempscore=(*p).J_Level[i];
                (*p).J_Level[i]=(*p).J_Level[i+1];
                (*p).J_Level[i+1]=tempscore;
                tempnum=(*p).Jnum[i];
                (*p).Jnum[i]=(*p).Jnum[i+1];
                (*p).Jnum[i+1]=tempnum;
            }
        }while(i<nJudge-j);
    }while(j<nJudge-1);///nΪԪ������
}
int main()
{
    int nJudge,nAthlete,i,j;
    float sumA,sumJ;
    ME store;
    ME *p=&store;
    int k,temp_max=0,temp_min=0;
    printf("How many Athletes?\n");
    scanf("%d",&nAthlete);
    printf("How many judges?\n");
    scanf("%d",&nJudge);
    printf("Scores of Athletes:\n");
    for(j=0;j<nJudge;j++)
    {
        (*p).Jnum[j]=j+1;
    }
    for(i=0;i<nAthlete;i++)
    {
        sumA=0;
        printf("Athlete %d is playing.\n",i+1);
        printf("Please enter his number code:\n");
        scanf("%d",&p->Anum[i]);
        for(j=0;j<nJudge;j++)
        {
            printf("Judge %d gives score:\n",j+1);
            scanf("%f",&p->J_to_A[i][j]);
        }
        for(k=0;k<nJudge;k++)///---ɾ�����ֵ����Сֵ
        {
            if((*p).J_to_A[i][k]>(*p).J_to_A[i][temp_max])
                temp_max=k;
        }
        for(k=0;k<nJudge;k++)
        {
            if((*p).J_to_A[i][k]<(*p).J_to_A[i][temp_min])
                temp_min=k;
        }
        printf("Delete a maximum score:%.1f\n",(*p).J_to_A[i][temp_max]);
        printf("Delete a minimum score:%.1f\n",(*p).J_to_A[i][temp_min]);///---ɾ�����ֵ����Сֵ
        for(j=0;j<nJudge;j++)
            sumA+=(*p).J_to_A[i][j];
        (*p).finalscore[i]=(sumA-(*p).J_to_A[i][temp_max]-(*p).J_to_A[i][temp_min])/(float)(nJudge-2);
        printf("The final score of Athlete %d is %.3f\n",(*p).Anum[i],(*p).finalscore[i]);
    }
    for(j=0;j<nJudge;j++)
    {
        sumJ=0;
        for(i=0;i<nAthlete;i++)
        {
            if((*p).J_to_A[i][j]!=0)
                sumJ+=((*p).J_to_A[i][j]-(*p).finalscore[i])*((*p).J_to_A[i][j]-(*p).finalscore[i]);
        }
        (*p).J_Level[j]=10.0-sqrt(sumJ/nAthlete);
    }
    printf("Order of Athletes:\n");
    printf("order\tfinal score\tnumber code\n");
    sortA(p,nAthlete);
    for(i=0;i<nAthlete;i++)
    {
        printf("%5d\t%11.3f\t%6d\n",i+1,(*p).finalscore[i],(*p).Anum[i]);
    }
    printf("Order of judges:\n");
    printf("order\tfinal score\tnumber code\n");
    sortJ(p,nJudge);
    for(i=0;i<nJudge;i++)
    {
        printf("%5d\t%11.3f\t%6d\n",i+1,(*p).J_Level[i],(*p).Jnum[i]);
    }
    printf("Over!Thank you!\n");
    return 0;
}
