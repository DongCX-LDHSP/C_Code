#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void Input_Find(int p[][40],int m,int n);
int main()
{
    int performance[3][40];
    Input_Find(performance,3,40);
    return 0;
}
void Input_Find(int p[][40],int m,int n)
{
    int i,j,row=0,col=0,maxvalue;
    ///画流程图抄代码时可略
    char r;
    printf("你想使用随机值吗?(y/Y|n/N)\n");
    r=getch();
    if(r=='y'||r=='Y')
    {
        srand(time(0));
        for(i=0;i<3;i++)
        {
            for(j=0;j<40;j++)
                p[i][j]=rand()%59+40;
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<40;j++)
                printf("%3d",p[i][j]);
            printf("\n");
        }
    }
    ///至此结束
    else
    {
        for(i=0;i<3;i++)
        {
            printf("请输入 %d 的成绩：\n",i+1);
            for(j=0;j<40;j++)
                scanf("%d",&p[i][j]);
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<40;j++)
                printf("%3d",p[i][j]);
            printf("\n");
        }
    }
    maxvalue=p[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<40;j++)
        {
            if(maxvalue<p[i][j])
            {
                maxvalue=p[i][j];
                row=i;
                col=j;
            }
        }
    }
    printf("最高分 %d 所在的班级是：%d\n在数组中的行标和列标分别为：\nrow=%d,col=%d\n",maxvalue,row+1,row,col);
}
