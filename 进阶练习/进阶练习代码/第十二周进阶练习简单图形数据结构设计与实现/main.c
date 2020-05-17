#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 100

enum kinds {eNONE,eLINE,eRECTANGLE,eCIRCLE,eELLIPSE};
typedef struct line
{
    int x1,y1,x2,y2;
}LINE;
typedef struct rectangle
{
    int x1,y1,x2,y2;
}RECTANGLE;
typedef struct circle
{
    int x,y,r;
}CIRCLE;
typedef struct ellipse
{
    int x,y,long_r,short_r;
}ELLIPSE;
typedef union shape
{
    LINE lin;
    RECTANGLE rec;
    CIRCLE cir;
    ELLIPSE ell;
}SHAPE;
typedef struct doer
{
    SHAPE get_shape;
    int drawtype;///ͼ������
    int ID;///ͼ�α��
}GET;

int ADD(GET l_r_c_e[N],int count);
void LIST(GET l_r_c_e[N]);
void DELETE(GET l_r_c_e[N]);
int if_eNONE(GET l_r_c_e[N]);
int main()
{
    char nInput;
    int if_exit=1;
    GET l_r_c_e[N];
    int count=0,i=0;
    do
    {
        l_r_c_e[i].drawtype=-1;
        i++;
    }while(i<N-1);
    do
    {
        printf("Add/List/Delete/Quit\n��������ĸѡ���ܣ�");
        nInput=getch();
        switch(nInput)
        {
            case 'a':
            case 'A':
                system("cls");
                count=ADD(l_r_c_e,count);
                break;
            case 'l':
            case 'L':
                system("cls");
                LIST(l_r_c_e);
                break;
            case 'd':
            case 'D':
                system("cls");
                DELETE(l_r_c_e);
                break;
            case 'q':
            case 'Q':
                if_exit=0;
                break;
            default:
                printf("\n������󣬰����������...");
                getch();
                break;
        }
        system("cls");
    }while(if_exit);
    return 0;
}
int ADD(GET l_r_c_e[N],int count)
{
    char nGet;
    int if_exit=1;
    do
    {
        printf("Line/Rectangle/Circle/Ellipse\n��������ĸѡ��Ҫ��ӵ�ͼ�������ESC�����أ�");
        nGet=getch();
        system("cls");
        switch(nGet)
        {
            case 'l':
            case 'L':
                printf("������ֱ�ߵ������˵����꣺x1,y1,x2,y2�����س�\n");
                count=if_eNONE(l_r_c_e);
                scanf("%d,%d,%d,%d%*c",&l_r_c_e[count].get_shape.lin.x1,
                                       &l_r_c_e[count].get_shape.lin.y1,
                                       &l_r_c_e[count].get_shape.lin.x2,
                                       &l_r_c_e[count].get_shape.lin.y2);
                l_r_c_e[count].ID=count;
                l_r_c_e[count].drawtype=eLINE;
                count++;
                printf("һ��ֱ���Ѿ�����ӣ������������...");
                if_exit=0;
                getch();
                break;
            case 'r':
            case 'R':
                printf("��������ε����ϽǺ����½����꣺x1,y1,x2,y2�����س�\n");
                count=if_eNONE(l_r_c_e);
                scanf("%d,%d,%d,%d%*c",&l_r_c_e[count].get_shape.rec.x1,
                                       &l_r_c_e[count].get_shape.rec.y1,
                                       &l_r_c_e[count].get_shape.rec.x2,
                                       &l_r_c_e[count].get_shape.rec.y2);
                l_r_c_e[count].ID=count;
                l_r_c_e[count].drawtype=eRECTANGLE;
                count++;
                printf("һ�������Ѿ�����ӣ������������...");
                if_exit=0;
                getch();
                break;
            case 'c':
            case 'C':
                printf("������Բ������Ͱ뾶��x,y,r�����س�\n");
                count=if_eNONE(l_r_c_e);
                scanf("%d,%d,%d%*c",&l_r_c_e[count].get_shape.cir.x,
                                    &l_r_c_e[count].get_shape.cir.y,
                                    &l_r_c_e[count].get_shape.cir.r);
                l_r_c_e[count].ID=count;
                l_r_c_e[count].drawtype=eCIRCLE;
                count++;
                printf("һ��Բ�Ѿ�����ӣ������������...");
                if_exit=0;
                getch();
                break;
            case 'e':
            case 'E':
                printf("��������Բ���������ꡢ����Ͷ��᣺x,y,long_r,short_r�����س�\n");
                count=if_eNONE(l_r_c_e);
                scanf("%d,%d,%d,%d%*c",&l_r_c_e[count].get_shape.ell.x,
                                       &l_r_c_e[count].get_shape.ell.y,
                                       &l_r_c_e[count].get_shape.ell.long_r,
                                       &l_r_c_e[count].get_shape.ell.short_r);
                l_r_c_e[count].ID=count;
                l_r_c_e[count].drawtype=eELLIPSE;
                count++;
                printf("һ����Բ�Ѿ�����ӣ������������...");
                if_exit=0;
                getch();
                break;
            case 27:
                if_exit=0;
                break;
            default:
                printf("������󣬰����������...");
                getch();
                system("cls");
                break;
        }
    }while(if_exit);
    return count;
}
void LIST(GET l_r_c_e[N])
{
    int i=0;
    while(l_r_c_e[i].drawtype!=-1)
    {
        if(l_r_c_e[i].drawtype)
        {
            printf("ID=%d��",l_r_c_e[i].ID);
            switch(l_r_c_e[i].drawtype)
            {
                case eLINE:
                    printf("ֱ�ߣ��˵�����Ϊ��x1=%d,y1=%d,x2=%d,y2=%d\n",
                           l_r_c_e[i].get_shape.lin.x1,
                           l_r_c_e[i].get_shape.lin.y1,
                           l_r_c_e[i].get_shape.lin.x2,
                           l_r_c_e[i].get_shape.lin.y2);
                    break;
                case eRECTANGLE:
                    printf("���Σ����Ͻ�����Ϊ��x1=%d,y1=%d�����½�����Ϊ��x2=%d,y2=%d\n",
                           l_r_c_e[i].get_shape.rec.x1,
                           l_r_c_e[i].get_shape.rec.y1,
                           l_r_c_e[i].get_shape.rec.x2,
                           l_r_c_e[i].get_shape.rec.y2);
                    break;
                case eCIRCLE:
                    printf("Բ��Բ������Ϊ��x=%d,y=%d���뾶Ϊ��r=%d\n",
                           l_r_c_e[i].get_shape.cir.x,
                           l_r_c_e[i].get_shape.cir.y,
                           l_r_c_e[i].get_shape.cir.r);
                    break;
                case eELLIPSE:
                    printf("��Բ����������Ϊ��x=%d,y=%d���볤��Ϊ��long_r=%d�������Ϊ��short_r=%d\n",
                           l_r_c_e[i].get_shape.ell.x,
                           l_r_c_e[i].get_shape.ell.y,
                           l_r_c_e[i].get_shape.ell.long_r,
                           l_r_c_e[i].get_shape.ell.short_r);
                    break;
                default:
                    break;
            }
        }
        i++;
    }
    printf("�����������...");
    getch();
}
void DELETE(GET l_r_c_e[N])
{
    printf("�������ޣ��Լ췢��delete�����Ĺ�������ʦ���г���...\n");
    int deID,if_exit=1,ESC_ENTER;
    printf("������Ҫɾ����ͼ�ε�ID�Ż�ESC�����أ�");
    do
    {
        ESC_ENTER=getch();
        if(ESC_ENTER==13||ESC_ENTER==27)
            if_exit=0;
        else
        {
            deID=ESC_ENTER-'0';
            printf("%d",deID);
        }
    }while(if_exit);
    if(ESC_ENTER==13)
    {
        if(l_r_c_e[deID].drawtype!=eNONE&&l_r_c_e[deID].drawtype!=-1)
        {
            l_r_c_e[deID].drawtype=eNONE;
            printf("\nIDΪ%d��ͼ�α�ɾ�������������...",deID);
        }
        else
            printf("\nIDΪ%d��ͼ��δ�ҵ�...",deID);
        getch();
    }
}
int if_eNONE(GET l_r_c_e[N])
{
    int i=0;
    for(;l_r_c_e[i].drawtype!=-1;i++)
    {
        if(l_r_c_e[i].drawtype==eNONE)
            break;
    }
    return i;
}
