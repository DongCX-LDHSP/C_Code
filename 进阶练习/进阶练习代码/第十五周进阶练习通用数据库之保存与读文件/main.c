#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

enum EXIT {YES,NO};
typedef struct property
{
    char proper_name[15];///字段名
    char cProper;///字段存储信息的类型
    int proper_len;///字段存储信息的长度
} PROPERTY;
PROPERTY* Input_Property(PROPERTY *p,int *field,int *num);
void Output_Property(PROPERTY *p,int field,int len);
void Input_Info(PROPERTY *p,void *In,int field,int num,int *count_Info);
void Output_Info(PROPERTY *p,void *In,int field,int count_Info);
void Write(PROPERTY *p,void *In,int field,int num,int count_Info,int len);
void Read(void);
void Error(void)
{
    printf("内存申请失败！任意键返回菜单...");
    getch();
}
void main(void)
{
    int i,field,num,sum_len,count_Info,if_exit=NO;///m存储字段数，n存储条数
    PROPERTY *pProperty=NULL;
    void *pIn_Store=NULL;
    char choose;
    while(if_exit)
    {
        printf("请按方括号中的字母选择功能\n[C]Create a table\n[L]List a table exist\n[Q]Quit\n");
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
                pIn_Store=(void*)calloc(sum_len*num,sizeof(char));    ///----2 calloc       ///申请一个动态数组存储录入信息
                if(pIn_Store!=NULL)///以下录入信息并输出信息
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
            printf("程序已退出！");
            if_exit=YES;
        }
    }
}
PROPERTY* Input_Property(PROPERTY *p,int *field,int *num)
{
    int i;
    printf("请输入记录的字段数:");
    scanf("%d",field);
    printf("请输入记录条数:");
    scanf("%d",num);
    p=(PROPERTY*)calloc(*field,sizeof(PROPERTY));             ///----1 calloc        ///申请一个动态数组存储字符段属性
    if(p!=NULL)
    {
        system("cls");
        for(i=0; i<*field; i++)
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
    return p;
}
void Output_Property(PROPERTY *p,int field,int len)
{
    int i;
    system("cls");
    printf("已建立记录的字段属性信息：\n");
    for(i=0; i<field; i++)
        printf("字段ID：%d|%s-%d-%c\n",i+1,p[i].proper_name,p[i].proper_len,p[i].cProper);
    printf("一组字段占用的总空间为:%d\n",len);
    printf("按任意键，可以录入信息\n");
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
            printf("%s：",p[j].proper_name);
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
            printf("一条记录录入完毕！按任意键继续录入，按ESC键返回\n");
            if(getch()==27)
                ESC=YES;
        }
    }
    if(ESC)
    {
        printf("已经录入了最后一条记录，按任意键可浏览输入的数据\n");
        getch();
    }
}
void Output_Info(PROPERTY *p,void *In,int field,int count_Info)
{

    int *INT=NULL,i,j;
    char *CHAR=NULL;
    system("cls");
    printf("已经录入的信息：\n");
    for(i=0; i<count_Info; i++)
    {
        for(j=0; j<field; j++)
        {
            printf("%s：",p[j].proper_name);
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
    printf("\n请输入想要保存的文件名\n");
    gets(a);
    pFile=fopen(a,"wb");
    if(pFile!=NULL)
    {
        fprintf(pFile,"Version:%d\n",version);
        fprintf(pFile,"字段数量为：%d，记录条数为：%d，实际录入条数为：%d，记录头长度为：%d，每条记录的长度为：%d\n",field,num,count_Info,24*field+13,len);
        fprintf(pFile,"表文件中字段的数据信息如下\n");
        for(i=0; i<field; i++)
            fprintf(pFile,"字段ID:%d|%s-%d-%c\n",i+1,p[i].proper_name,p[i].proper_len,p[i].cProper);
        fprintf(pFile,"表文件中的记录信息如下\n");
        for(i=0; i<count_Info; i++)
        {
            for(j=0; j<field; j++)
            {
                fprintf(pFile,"%s：",p[j].proper_name);
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
                fputc(10,pFile);///10为回车的ASCII值
        }
        fclose(pFile);
        printf("文件建立成功！任意键返回菜单...");
    }
    else
        printf("啊哦！文件建立失败了！任意键返回菜单...");
    getch();
}
void Read(void)
{
    FILE *read_message;
    char a[20];
    printf("请输入要浏览的文件名\n");
    gets(a);
    read_message=fopen(a,"rb");
    if(read_message!=NULL)
    {
        fgets(a, 20, read_message);
        if(0 == strcmp(a, "Version:18\n"))
        {
            printf("以下是从文件中读出的信息\n");
            while(!feof(read_message))
            {
                fgets(a,20,read_message);
                printf("%s",a);
            }
            printf("\n文件已读出，任意键返回菜单...");
        }
        else
            printf("打开文件时出错！\n有两种可能：\n1.版本不符合，您没有权限查看此文档\n2.本程序不支持此类文件\n任意键返回菜单以继续操作...");
        fclose(read_message);
    }
    else
        printf("啊哦！文件打开失败了！任意键返回菜单...");
    getch();
}
