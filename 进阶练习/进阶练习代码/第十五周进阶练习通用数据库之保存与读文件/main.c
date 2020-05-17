#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

enum EXIT {YES,NO};
typedef struct property
{
    char proper_name[15];///�ֶ���
    char cProper;///�ֶδ洢��Ϣ������
    int proper_len;///�ֶδ洢��Ϣ�ĳ���
} PROPERTY;
PROPERTY* Input_Property(PROPERTY *p,int *field,int *num);
void Output_Property(PROPERTY *p,int field,int len);
void Input_Info(PROPERTY *p,void *In,int field,int num,int *count_Info);
void Output_Info(PROPERTY *p,void *In,int field,int count_Info);
void Write(PROPERTY *p,void *In,int field,int num,int count_Info,int len);
void Read(void);
void Error(void)
{
    printf("�ڴ�����ʧ�ܣ���������ز˵�...");
    getch();
}
void main(void)
{
    int i,field,num,sum_len,count_Info,if_exit=NO;///m�洢�ֶ�����n�洢����
    PROPERTY *pProperty=NULL;
    void *pIn_Store=NULL;
    char choose;
    while(if_exit)
    {
        printf("�밴�������е���ĸѡ����\n[C]Create a table\n[L]List a table exist\n[Q]Quit\n");
        choose=getch();
        system("cls");
        if(choose=='C'||choose=='c')
        {
            sum_len=0;
            count_Info=0;
            pProperty=Input_Property(pProperty,&field,&num);
            if(pProperty!=NULL)
            {
                for(i=0; i<field; i++)
                    sum_len+=pProperty[i].proper_len;
                Output_Property(pProperty,field,sum_len);
                pIn_Store=(void*)calloc(sum_len*num,sizeof(char));    ///----2 calloc       ///����һ����̬����洢¼����Ϣ
                if(pIn_Store!=NULL)///����¼����Ϣ�������Ϣ
                {
                    Input_Info(pProperty,pIn_Store,field,num,&count_Info);
                    Output_Info(pProperty,pIn_Store,field,count_Info);
                    Write(pProperty,pIn_Store,field,num,count_Info,sum_len);
                    free(pProperty);                            ///----1 free
                    free(pIn_Store);                                  ///----2 free
                }
                else
                    Error();
            }
            else
                Error();
            system("cls");
        }
        else if(choose=='L'||choose=='l')
        {
            Read();
            system("cls");
        }
        else if(choose=='Q'||choose=='q')
        {
            printf("�������˳���");
            if_exit=YES;
        }
    }
}
PROPERTY* Input_Property(PROPERTY *p,int *field,int *num)
{
    int i;
    printf("�������¼���ֶ���:");
    scanf("%d",field);
    printf("�������¼����:");
    scanf("%d",num);
    p=(PROPERTY*)calloc(*field,sizeof(PROPERTY));             ///----1 calloc        ///����һ����̬����洢�ַ�������
    if(p!=NULL)
    {
        system("cls");
        for(i=0; i<*field; i++)
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
    return p;
}
void Output_Property(PROPERTY *p,int field,int len)
{
    int i;
    system("cls");
    printf("�ѽ�����¼���ֶ�������Ϣ��\n");
    for(i=0; i<field; i++)
        printf("�ֶ�ID��%d|%s-%d-%c\n",i+1,p[i].proper_name,p[i].proper_len,p[i].cProper);
    printf("һ���ֶ�ռ�õ��ܿռ�Ϊ:%d\n",len);
    printf("�������������¼����Ϣ\n");
    getch();
}
void Input_Info(PROPERTY *p,void *In,int field,int num,int *count_Info)
{
    int *INT=NULL,ESC=NO,i,j;
    char *CHAR=NULL;
    system("cls");
    fflush(stdin);
    for(i=0; i<num&&ESC; i++)
    {
        for(j=0; j<field; j++)
        {
            printf("%s��",p[j].proper_name);
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
        (*count_Info)++;
        if(i<num-1)
        {
            printf("һ����¼¼����ϣ������������¼�룬��ESC������\n");
            if(getch()==27)
                ESC=YES;
        }
    }
    if(ESC)
    {
        printf("�Ѿ�¼�������һ����¼�����������������������\n");
        getch();
    }
}
void Output_Info(PROPERTY *p,void *In,int field,int count_Info)
{

    int *INT=NULL,i,j;
    char *CHAR=NULL;
    system("cls");
    printf("�Ѿ�¼�����Ϣ��\n");
    for(i=0; i<count_Info; i++)
    {
        for(j=0; j<field; j++)
        {
            printf("%s��",p[j].proper_name);
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
void Write(PROPERTY *p,void *In,int field,int num,int count_Info,int len)
{
    int *INT=NULL,i,j;
    char *CHAR=NULL,a[21],version=18;
    FILE *pFile;
    printf("\n��������Ҫ������ļ���\n");
    gets(a);
    pFile=fopen(a,"wb");
    if(pFile!=NULL)
    {
        fprintf(pFile,"Version:%d\n",version);
        fprintf(pFile,"�ֶ�����Ϊ��%d����¼����Ϊ��%d��ʵ��¼������Ϊ��%d����¼ͷ����Ϊ��%d��ÿ����¼�ĳ���Ϊ��%d\n",field,num,count_Info,24*field+13,len);
        fprintf(pFile,"���ļ����ֶε�������Ϣ����\n");
        for(i=0; i<field; i++)
            fprintf(pFile,"�ֶ�ID:%d|%s-%d-%c\n",i+1,p[i].proper_name,p[i].proper_len,p[i].cProper);
        fprintf(pFile,"���ļ��еļ�¼��Ϣ����\n");
        for(i=0; i<count_Info; i++)
        {
            for(j=0; j<field; j++)
            {
                fprintf(pFile,"%s��",p[j].proper_name);
                if(p[j].cProper=='n')
                {
                    INT=In;
                    fprintf(pFile,"%d  ",*INT);
                }
                else
                {
                    CHAR=In;
                    fprintf(pFile,"%s  ",CHAR);
                }
                In=In+p[j].proper_len;
            }
            if (i < count_Info - 1)
                fputc(10,pFile);///10Ϊ�س���ASCIIֵ
        }
        fclose(pFile);
        printf("�ļ������ɹ�����������ز˵�...");
    }
    else
        printf("��Ŷ���ļ�����ʧ���ˣ���������ز˵�...");
    getch();
}
void Read(void)
{
    FILE *read_message;
    char a[20];
    printf("������Ҫ������ļ���\n");
    gets(a);
    read_message=fopen(a,"rb");
    if(read_message!=NULL)
    {
        fgets(a, 20, read_message);
        if(0 == strcmp(a, "Version:18\n"))
        {
            printf("�����Ǵ��ļ��ж�������Ϣ\n");
            while(!feof(read_message))
            {
                fgets(a,20,read_message);
                printf("%s",a);
            }
            printf("\n�ļ��Ѷ�������������ز˵�...");
        }
        else
            printf("���ļ�ʱ����\n�����ֿ��ܣ�\n1.�汾�����ϣ���û��Ȩ�޲鿴���ĵ�\n2.������֧�ִ����ļ�\n��������ز˵��Լ�������...");
        fclose(read_message);
    }
    else
        printf("��Ŷ���ļ���ʧ���ˣ���������ز˵�...");
    getch();
}
