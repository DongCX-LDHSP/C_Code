#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
struct DataField
{
    int DataId;
    char caption[11];
    char type;
    int DataLen;
    int DataOffse;
}*df,*df1,*Lastdf;

int main()
{
    char *pd,*temp,myKey;
    int FieldNum=4,RecordNum,DataSize=0;;
    int i,j,count=0;
    printf("请输入记录的字段数：");
    scanf("%d",&FieldNum);
    printf("请输入记录条数：");
    scanf("%d",&RecordNum);
    system("cls");
    df1=(struct DataField*)calloc(FieldNum,sizeof(struct DataField));
    df=df1;
    Lastdf=df1;

    for(i=0; i<FieldNum; i++)
    {
        printf("请输入字段名称：");
        scanf("%s",df->caption);
        df->DataId=i+1;
        printf("请输入选择字段类型：int n,string s");
        scanf(" %c",&df->type);
        if('n'==df->type)
            df->DataLen=4;
        else
        {
            printf("输入字符串长度：");
            scanf("%d",&df->DataLen);
            df->DataLen+=1;
        }


        if(0==i)
            df->DataOffse=0;
        else
            df->DataOffse=(df-1)->DataLen;
        printf("一个字段属性输入完毕，按任意键继续。。。\n");
        df++;
        getchar();
    }
    printf("所有字段属性输入完毕，按任意键继续。。。\n");
    system("cls");
    printf("已建立记录的字段属性信息：\n");
    df=df1;
    for(i=0; i<FieldNum; i++)
    {
        printf("字段ID:%-3d,%-10s,%-3d,%c\n",df[i].DataId,df[i].caption,df[i].DataLen,df[i].type);
        DataSize+=df[i].DataLen;
    }
    pd=calloc(RecordNum,DataSize);
    printf("%d\n",DataSize);
    char *pc;
    char *pn;
    pn=pd;
    printf("按任意键，可以录入信息\n");
    getch();
    system("cls");
    while(27!=myKey)
    {
        for(i=0; i<FieldNum; i++)
        {
            //printf("dataoffse:%d",df[i].DataOffse);
            printf("%s=",df[i].caption);
            switch(df[i].type)
            {
            case 'n':
                scanf("%d",(int*)pn);
                break;
            case 's':
                scanf(" %s",pn);
                break;
            }
            pn=pn+df[i].DataLen;
            //printf("；");
        }
        count++;
        pn=pd+count*DataSize;
        if(RecordNum==count)
        {
            printf("已经录入完了最后一条记录，按任意键可浏览输入的数据\n");
            myKey=getch();
            myKey=27;
        }
        else
        {
            printf("一条记录录入完毕！按任意键继续录入，按ESC键返回\n");
            myKey=getch();
        }
    }

    system("cls");
    printf("已经录入的信息：\n");
    pn=pd;
    for(j=0; j<count; j++)
    {
        for(i=0; i<FieldNum; i++)
        {

            printf("%s:",df[i].caption);
            switch(df[i].type)
            {
            case 'n':
                printf("%-5d",*((int*)pn));
                break;
            case 's':
                printf("%*s",-df[i].DataLen,pn);
                break;
            }
            pn=pn+df[i].DataLen;
        }
        printf("\n");
    }

    pn=pd;
    free(pd);
    free(df1);
    printf("\n\n\n程序执行完毕!按任意键退出程序。。。");
    getch();
    return 0;
}
