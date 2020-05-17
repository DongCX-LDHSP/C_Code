#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct property
{
    char proper_name[15];///�ֶ���
    char cProper;///�ֶδ洢��Ϣ������
    int proper_len;///�ֶδ洢��Ϣ�ĳ���
}PROPERTY;
void Input_Property(PROPERTY *p,int field);
void Output_Property(PROPERTY *p,int field,int len);
int Input_Info(PROPERTY *p,void *In,int field,int num,int count_Info);
void Output_Info(PROPERTY *p,void *In,int field,int count_Info);
int main()
{
    int field,num;///m�洢�ֶ�����n�洢����
    int sum_len=0,count_Info=0,i;
    PROPERTY *pStart=NULL;
    void *pIn_Store=NULL;
    printf("�������¼���ֶ���:");
    scanf("%d",&field);
    printf("�������¼����:");
    scanf("%d",&num);
    pStart=(PROPERTY*)calloc(field,sizeof(PROPERTY));///----1 calloc        ///����һ����̬����洢�ַ�������
    if(pStart!=NULL)
    {
        Input_Property(pStart,field);
        for(i=0;i<field;i++)
            sum_len+=pStart[i].proper_len;
        Output_Property(pStart,field,sum_len);
        pIn_Store=(void*)calloc(sum_len*num,sizeof(char));    ///----2 calloc       ///����һ����̬����洢¼����Ϣ
        if(pIn_Store!=NULL)///����¼����Ϣ�������Ϣ
        {
            count_Info=Input_Info(pStart,pIn_Store,field,num,count_Info);
            Output_Info(pStart,pIn_Store,field,count_Info);
        }
        else
            printf("�����ڴ�ռ�ʧ��...");
    }
    else
        printf("�����ڴ�ռ�ʧ��...");
    free(pStart);                                    ///----1 free
    free(pIn_Store);                                          ///----2 free
    printf("����ִ�����!��������˳�����...");
    getch();
    return 0;
}
void Input_Property(PROPERTY *p,int field)
{
    int i;
    system("cls");
    for(i=0;i<field;i++)
    {
        printf("�������ֶ����ƣ�");
        scanf("%s%*c",p[i].proper_name);
        printf("������ѡ���ֶ����ͣ�int n,string s\n");
        while(p[i].cProper!='s'&&p[i].cProper!='n')
            p[i].cProper=getchar();
        if(p[i].cProper=='s')
        {
            printf("�������ַ������ȣ�");
            scanf("%d",&p[i].proper_len);
            ++p[i].proper_len;
        }
        else
            p[i].proper_len=sizeof(int);
        printf("һ���ֶ�����������ϣ������������...\n");
        getch();
    }
}
void Output_Property(PROPERTY *p,int field,int len)
{
    int i;
    system("cls");
    printf("�ѽ�����¼���ֶ�������Ϣ��\n");
    for(i=0;i<field;i++)
        printf("�ֶ�ID:%d|%s-%d-%c\n",i+1,p[i].proper_name,p[i].proper_len,p[i].cProper);
    printf("һ���ֶ�ռ�õ��ܿռ�Ϊ:%d\n",len);
    printf("�������������¼����Ϣ\n");
    getch();
}
int Input_Info(PROPERTY *p,void *In,int field,int num,int count_Info)
{
    system("cls");
    fflush(stdin);
    int i,j,ESC=1;
    int *INT=NULL;
    char *CHAR=NULL;
    for(i=0;i<num&&ESC;i++)
    {
        for(j=0;j<field;j++)
        {
            printf("%s = ",p[j].proper_name);
            if(p[j].cProper=='n')
            {
                INT=In;
                scanf("%d%*c",INT);
            }
            else
            {
                CHAR=In;
                gets(CHAR);
            }
            In=In+p[j].proper_len;
        }
        count_Info++;
        if(i<num-1)
        {
            printf("һ����¼¼����ϣ������������¼�룬��ESC������\n");
            if(getch()==27)
                ESC=0;
        }
    }
    if(ESC)
    {
        printf("�Ѿ�¼�������һ����¼�����������������������\n");
        getch();
    }
    return count_Info;
}
void Output_Info(PROPERTY *p,void *In,int field,int count_Info)
{
    system("cls");
    int i,j;
    int *INT=NULL;
    char *CHAR=NULL;
    printf("�Ѿ�¼�����Ϣ��\n");
    for(i=0;i<count_Info;i++)
    {
        for(j=0;j<field;j++)
        {
            printf("%s = ",p[j].proper_name);
            if(p[j].cProper=='n')
            {
                INT=In;
                printf("%d  ",*INT);
            }
            else
            {
                CHAR=In;
                printf("%s  ",CHAR);
            }
            In=In+p[j].proper_len;
        }
        printf("\n");
    }
}
