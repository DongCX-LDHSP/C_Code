#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void Input_Find(int *Class,int *student,int m,int sum)
{
    int i,j,max,*maxvalue,*sum_stu;
    sum_stu=(int *)calloc(m,sizeof(int));
    sum_stu[0]=student[0];
    for(i=1;i<m;i++)
        sum_stu[i]=sum_stu[i-1]+student[i];
    ///������ͼ������ʱ����
    char r;
    srand(time(0));
    printf("����Ҫʹ�����ֵ��?(y/Y|n/N)\n");
    r=getch();
    if(r=='y'||r=='Y')
    {
        for(i=0;i<sum;i++)
            Class[i]=rand()%59+40;
        printf("����ɼ����£�\n");
        for(i=0,j=0;i<sum;i++)
        {
            printf("%3d",Class[i]);
            if((i+1)==sum_stu[j])
            {
                printf("\n");
                j++;
            }
        }
    }
    ///���˽���
    else
    {
        for(i=0,j=0;j<m;j++)
        {
            printf("������ %d ��ĳɼ�\n",j+1);
            for(;i<sum_stu[j];i++)
                scanf("%d",&Class[i]);
        }
        printf("����ɼ����£�\n");
        for(i=0,j=0;i<sum;i++)
        {
            printf("%d|",Class[i]);
            if((i+1)==sum_stu[j])
            {
                printf("\n\n");
                j++;
            }
        }
    }
    maxvalue=(int *)calloc(m,sizeof(int));
    maxvalue[0]=Class[0];
    for(j=1;j<m;j++)
    {
        maxvalue[j]=Class[sum_stu[j-1]];
    }
    for(j=0,i=0;j<m;j++)
    {
        max=i;
        for(;i<sum_stu[j];i++)
        {
            if(maxvalue[j]<Class[i])
            {
                maxvalue[j]=Class[i];
                max=i;
            }
        }
        max+=student[j];
        max-=sum_stu[j];
        printf(" %d �����߷�Ϊ %d,ѧ��Ϊ:%d\n",j+1,maxvalue[j],max+1);
    }
    free(sum_stu);
    free(maxvalue);
}
int main()
{
    int m,*Class,sum_num=0,*student,i;
    printf("������༶������:");
    scanf("%d",&m);
    student=(int *)calloc(m,sizeof(int));
    for(i=0;i<m;i++)
    {
        printf("������༶ %d ��ѧ����:",i+1);
        scanf("%d",&student[i]);
        sum_num+=student[i];
    }
    Class=(int*)calloc(sum_num,sizeof(int));
    Input_Find(Class,student,m,sum_num);
    free(Class);
    free(student);
    return 0;
}
