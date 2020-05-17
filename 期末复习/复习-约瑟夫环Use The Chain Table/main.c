/*题目要求：
27个人围成一圈，从第一个人开始顺序报号，凡报号为3的
倍数者退出圈子，找出最后留在圈子中的人原来的序号。*/
#include <stdio.h>
#include <stdlib.h>

enum {Failed,Succeed} memory;
typedef struct Joseph
{
    int nNum;
    struct Joseph *Next;
} JOSEPH;
int main()
{
    int i=1;
    JOSEPH *Begin,*Head,*temp;
    Begin=(JOSEPH*)calloc(1,sizeof(JOSEPH));
    memory=Succeed;
    if(Begin!=NULL)
    {
        Head=Begin;
        Begin->nNum=i;
        Begin->Next=Begin;
        for(i++; i<=27&&memory; i++)
        {
            temp=(JOSEPH*)calloc(1,sizeof(JOSEPH));
            if(temp!=NULL)
            {
                Begin->Next=temp;
                temp->nNum=i;
                temp->Next=Head;
                Begin=temp;
            }
            else
            {
                memory=Failed;
                printf("No enough memory!");
            }
        }
        if(memory)
        {
            for(Begin=Head,i=1; Begin->Next!=Begin; i++)
            {
                if((i+1)%3==0)
                {
                    temp=Begin->Next;
                    Begin->Next=Begin->Next->Next;
                    free(temp);
                    i=0;
                }
                Begin=Begin->Next;
            }
            printf("最后一个在圈中的人原来的序号是：%d。",Begin->nNum);
            free(Begin);
        }
    }
    else
        printf("No enough memory!");
    return 0;
}
