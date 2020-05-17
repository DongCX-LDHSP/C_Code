#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void Find_Max(int *p,int m,int n);
int main()
{
    int m,n;
    int *array;
    printf("Input m(class),n(student)\n");
    scanf("%d,%d",&m,&n);
    array=(int*)calloc(m*n,sizeof(int));
    Find_Max(array,m,n);
    free(array);
    return 0;
}
void Find_Max(int *p,int m,int n)
{
    int i,J;
    int row,col,which_class,max,maxvalue;
    char r;
    J=m*n;
    srand(time(0));
    printf("Do you want to have a rand value?(y/Y|n/N)\n");
    r=getch();
    ///画流程图时可略
    if(r=='y'||r=='Y')
    {
        for(i=0;i<J;i++)
            p[i]=rand()%99+1;
        for(i=0;i<J;i++)
        {
            printf("%3d",p[i]);
            if((i+1)%n==0)
                printf("\n");
        }
    }
    ///至此结束
    else
    {
        printf("Please input data\n");
        for(i=0;i<J;i++)
            scanf("%d",&p[i]);
        printf("The data you input are below\n");
        for(i=0;i<J;i++)
        {
            printf("%2d",p[i]);
            if((i+1)%n==0)
                printf("\n");
        }
    }
    maxvalue=p[0];
    for(i=0;i<J-1;i++)
    {
        if(maxvalue<p[i+1])
        {
            max=i+1;
            maxvalue=p[i+1];
        }
    }
    which_class=(max-1)/n;
    row=which_class;
    col=max%n;
    printf("班级是：%d\n在数组中的行标和列标分别为：\nrow=%d,col=%d\n",which_class+1,row,col);
}
