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
    printf("�������¼���ֶ�����");
    scanf("%d",&FieldNum);
    printf("�������¼������");
    scanf("%d",&RecordNum);
    system("cls");
    df1=(struct DataField*)calloc(FieldNum,sizeof(struct DataField));
    df=df1;
    Lastdf=df1;

    for(i=0; i<FieldNum; i++)
    {
        printf("�������ֶ����ƣ�");
        scanf("%s",df->caption);
        df->DataId=i+1;
        printf("������ѡ���ֶ����ͣ�int n,string s");
        scanf(" %c",&df->type);
        if('n'==df->type)
            df->DataLen=4;
        else
        {
            printf("�����ַ������ȣ�");
            scanf("%d",&df->DataLen);
            df->DataLen+=1;
        }


        if(0==i)
            df->DataOffse=0;
        else
            df->DataOffse=(df-1)->DataLen;
        printf("һ���ֶ�����������ϣ������������������\n");
        df++;
        getchar();
    }
    printf("�����ֶ�����������ϣ������������������\n");
    system("cls");
    printf("�ѽ�����¼���ֶ�������Ϣ��\n");
    df=df1;
    for(i=0; i<FieldNum; i++)
    {
        printf("�ֶ�ID:%-3d,%-10s,%-3d,%c\n",df[i].DataId,df[i].caption,df[i].DataLen,df[i].type);
        DataSize+=df[i].DataLen;
    }
    pd=calloc(RecordNum,DataSize);
    printf("%d\n",DataSize);
    char *pc;
    char *pn;
    pn=pd;
    printf("�������������¼����Ϣ\n");
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
            //printf("��");
        }
        count++;
        pn=pd+count*DataSize;
        if(RecordNum==count)
        {
            printf("�Ѿ�¼���������һ����¼�����������������������\n");
            myKey=getch();
            myKey=27;
        }
        else
        {
            printf("һ����¼¼����ϣ������������¼�룬��ESC������\n");
            myKey=getch();
        }
    }

    system("cls");
    printf("�Ѿ�¼�����Ϣ��\n");
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
    printf("\n\n\n����ִ�����!��������˳����򡣡���");
    getch();
    return 0;
}
