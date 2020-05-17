#include <stdio.h>
#include <stdlib.h>

struct test
{
    int data;
    struct test *next;
    struct test *forward;
};
int main()
{
    struct test *head,*pre,*pt,*ptemp,*pInsert,*tail,*pdelete;
    int i,len;
    pt=(struct test*)malloc(sizeof(struct test));
    head=pt;
    pt->data=0;
    pt->forward=NULL;
    pt->next=NULL;
    printf("请输入链表的长度：");
    scanf("%d",&len);
    ptemp=pt;
    for(i=1;i<len;i++)
    {
        pre=(struct test*)malloc(sizeof(struct test));
        ptemp->next=pre;
        pre->data=i;
        pre->forward=ptemp;
        pre->next=NULL;
        ptemp=pre;
    }
    tail=ptemp;
    pInsert=(struct test*)malloc(sizeof(struct test));
    pInsert->next=head;
    head->forward=pInsert;
    head=pInsert;
    pInsert->forward=NULL;
    pInsert->data=-1;
    pdelete=head;
    while(pdelete->data!=6)
    {
        pdelete=pdelete->next;
    }
    pdelete->forward->next=pdelete->next;
    pdelete->next->forward=pdelete->forward;
    free(pdelete);
    while(tail->forward!=NULL)
    {
        printf("%-3d",tail->data);
        tail=tail->forward;
        if(tail->forward==NULL)
            printf("%-3d",tail->data);
    }
    free(head);
    free(pInsert);
    return 0;
}
