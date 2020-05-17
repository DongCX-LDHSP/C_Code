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
    int drawtype;///图形类型
    int ID;///图形编号
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
        printf("Add/List/Delete/Quit\n输入首字母选择功能：");
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
                printf("\n输入错误，按任意键返回...");
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
        printf("Line/Rectangle/Circle/Ellipse\n输入首字母选择要添加的图形种类或按ESC键返回：");
        nGet=getch();
        system("cls");
        switch(nGet)
        {
            case 'l':
            case 'L':
                printf("请输入直线的两个端点坐标：x1,y1,x2,y2并按回车\n");
                count=if_eNONE(l_r_c_e);
                scanf("%d,%d,%d,%d%*c",&l_r_c_e[count].get_shape.lin.x1,
                                       &l_r_c_e[count].get_shape.lin.y1,
                                       &l_r_c_e[count].get_shape.lin.x2,
                                       &l_r_c_e[count].get_shape.lin.y2);
                l_r_c_e[count].ID=count;
                l_r_c_e[count].drawtype=eLINE;
                count++;
                printf("一条直线已经被添加！按任意键继续...");
                if_exit=0;
                getch();
                break;
            case 'r':
            case 'R':
                printf("请输入矩形的左上角和右下角坐标：x1,y1,x2,y2并按回车\n");
                count=if_eNONE(l_r_c_e);
                scanf("%d,%d,%d,%d%*c",&l_r_c_e[count].get_shape.rec.x1,
                                       &l_r_c_e[count].get_shape.rec.y1,
                                       &l_r_c_e[count].get_shape.rec.x2,
                                       &l_r_c_e[count].get_shape.rec.y2);
                l_r_c_e[count].ID=count;
                l_r_c_e[count].drawtype=eRECTANGLE;
                count++;
                printf("一个矩形已经被添加！按任意键继续...");
                if_exit=0;
                getch();
                break;
            case 'c':
            case 'C':
                printf("请输入圆心坐标和半径：x,y,r并按回车\n");
                count=if_eNONE(l_r_c_e);
                scanf("%d,%d,%d%*c",&l_r_c_e[count].get_shape.cir.x,
                                    &l_r_c_e[count].get_shape.cir.y,
                                    &l_r_c_e[count].get_shape.cir.r);
                l_r_c_e[count].ID=count;
                l_r_c_e[count].drawtype=eCIRCLE;
                count++;
                printf("一个圆已经被添加！按任意键继续...");
                if_exit=0;
                getch();
                break;
            case 'e':
            case 'E':
                printf("请输入椭圆的中心坐标、长轴和短轴：x,y,long_r,short_r并按回车\n");
                count=if_eNONE(l_r_c_e);
                scanf("%d,%d,%d,%d%*c",&l_r_c_e[count].get_shape.ell.x,
                                       &l_r_c_e[count].get_shape.ell.y,
                                       &l_r_c_e[count].get_shape.ell.long_r,
                                       &l_r_c_e[count].get_shape.ell.short_r);
                l_r_c_e[count].ID=count;
                l_r_c_e[count].drawtype=eELLIPSE;
                count++;
                printf("一个椭圆已经被添加！按任意键继续...");
                if_exit=0;
                getch();
                break;
            case 27:
                if_exit=0;
                break;
            default:
                printf("输入错误，按任意键返回...");
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
            printf("ID=%d：",l_r_c_e[i].ID);
            switch(l_r_c_e[i].drawtype)
            {
                case eLINE:
                    printf("直线：端点坐标为：x1=%d,y1=%d,x2=%d,y2=%d\n",
                           l_r_c_e[i].get_shape.lin.x1,
                           l_r_c_e[i].get_shape.lin.y1,
                           l_r_c_e[i].get_shape.lin.x2,
                           l_r_c_e[i].get_shape.lin.y2);
                    break;
                case eRECTANGLE:
                    printf("矩形：左上角坐标为：x1=%d,y1=%d；右下角坐标为：x2=%d,y2=%d\n",
                           l_r_c_e[i].get_shape.rec.x1,
                           l_r_c_e[i].get_shape.rec.y1,
                           l_r_c_e[i].get_shape.rec.x2,
                           l_r_c_e[i].get_shape.rec.y2);
                    break;
                case eCIRCLE:
                    printf("圆：圆心坐标为：x=%d,y=%d；半径为：r=%d\n",
                           l_r_c_e[i].get_shape.cir.x,
                           l_r_c_e[i].get_shape.cir.y,
                           l_r_c_e[i].get_shape.cir.r);
                    break;
                case eELLIPSE:
                    printf("椭圆：中心坐标为：x=%d,y=%d；半长轴为：long_r=%d，半短轴为：short_r=%d\n",
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
    printf("按任意键继续...");
    getch();
}
void DELETE(GET l_r_c_e[N])
{
    printf("能力有限，自检发现delete函数的功能与老师的有出入...\n");
    int deID,if_exit=1,ESC_ENTER;
    printf("请输入要删除的图形的ID号或按ESC键返回：");
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
            printf("\nID为%d的图形被删除！任意键返回...",deID);
        }
        else
            printf("\nID为%d的图形未找到...",deID);
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
