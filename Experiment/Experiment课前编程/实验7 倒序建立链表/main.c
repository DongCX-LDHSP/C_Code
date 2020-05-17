#include <stdio.h>
#include <stdlib.h>

struct line
{
    int nNum;
    struct line *next;
};
int main()
{
    struct line *head,*ptemp,*pt;
    int i;
    pt=(struct line*)malloc(sizeof(struct line));
    pt->next=NULL;
    pt->nNum=1;
    head=pt;
    for(i=1;i<9;i++)
    {
        ptemp=(struct line*)malloc(sizeof(struct line));
        ptemp->next=pt;
        ptemp->nNum=i+1;
        pt=ptemp;
    }
    head=ptemp;
    while(ptemp->next!=NULL)
    {
        if(ptemp->nNum%2==0)
            printf("%3d",ptemp->nNum);
        ptemp=ptemp->next;
    }
    return 0;
}
