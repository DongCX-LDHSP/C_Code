/*��ĿҪ��
27����Χ��һȦ���ӵ�һ���˿�ʼ˳�򱨺ţ�������Ϊ3��
�������˳�Ȧ�ӣ��ҳ��������Ȧ���е���ԭ������š�*/
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
            printf("���һ����Ȧ�е���ԭ��������ǣ�%d��",Begin->nNum);
            free(Begin);
        }
    }
    else
        printf("No enough memory!");
    return 0;
}
