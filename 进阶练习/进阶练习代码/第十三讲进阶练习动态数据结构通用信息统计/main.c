#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct property
{
    char proper_name[15];///字段名
    char cProper;///字段存储信息的类型
    int proper_len;///字段存储信息的长度
}PROPERTY;
void Input_Property(PROPERTY *p,int field);
void Output_Property(PROPERTY *p,int field,int len);
int Input_Info(PROPERTY *p,void *In,int field,int num,int count_Info);
void Output_Info(PROPERTY *p,void *In,int field,int count_Info);
int main()
{
    int field,num;///m存储字段数，n存储条数
    int sum_len=0,count_Info=0,i;
    PROPERTY *pStart=NULL;
    void *pIn_Store=NULL;
    printf("请输入记录的字段数:");
    scanf("%d",&field);
    printf("请输入记录条数:");
    scanf("%d",&num);
    pStart=(PROPERTY*)calloc(field,sizeof(PROPERTY));///----1 calloc        ///申请一个动态数组存储字符段属性
    if(pStart!=NULL)
    {
        Input_Property(pStart,field);
        for(i=0;i<field;i++)
            sum_len+=pStart[i].proper_len;
        Output_Property(pStart,field,sum_len);
        pIn_Store=(void*)calloc(sum_len*num,sizeof(char));    ///----2 calloc       ///申请一个动态数组存储录入信息
        if(pIn_Store!=NULL)///以下录入信息并输出信息
        {
            count_Info=Input_Info(pStart,pIn_Store,field,num,count_Info);
            Output_Info(pStart,pIn_Store,field,count_Info);
        }
        else
            printf("申请内存空间失败...");
    }
    else
        printf("申请内存空间失败...");
    free(pStart);                                    ///----1 free
    free(pIn_Store);                                          ///----2 free
    printf("程序执行完毕!按任意键退出程序...");
    getch();
    return 0;
}
void Input_Property(PROPERTY *p,int field)
{
    int i;
    system("cls");
    for(i=0;i<field;i++)
    {
        printf("请输入字段名称：");
        scanf("%s%*c",p[i].proper_name);
        printf("请输入选择字段类型：int n,string s\n");
        while(p[i].cProper!='s'&&p[i].cProper!='n')
            p[i].cProper=getchar();
        if(p[i].cProper=='s')
        {
            printf("请输入字符串长度：");
            scanf("%d",&p[i].proper_len);
            ++p[i].proper_len;
        }
        else
            p[i].proper_len=sizeof(int);
        printf("一个字段属性输入完毕，按任意键继续...\n");
        getch();
    }
}
void Output_Property(PROPERTY *p,int field,int len)
{
    int i;
    system("cls");
    printf("已建立记录的字段属性信息：\n");
    for(i=0;i<field;i++)
        printf("字段ID:%d|%s-%d-%c\n",i+1,p[i].proper_name,p[i].proper_len,p[i].cProper);
    printf("一组字段占用的总空间为:%d\n",len);
    printf("按任意键，可以录入信息\n");
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
            printf("一条记录录入完毕！按任意键继续录入，按ESC键返回\n");
            if(getch()==27)
                ESC=0;
        }
    }
    if(ESC)
    {
        printf("已经录入了最后一条记录，按任意键可浏览输入的数据\n");
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
    printf("已经录入的信息：\n");
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
