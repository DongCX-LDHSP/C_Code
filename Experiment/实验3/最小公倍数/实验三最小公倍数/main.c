#include <stdio.h>
#include <stdlib.h>

int QY(int x,int y);///���Լ��
int QB(int G,int x,int y);///��С������
int QY(int x,int y)
{
    int i;
    int nReceive;
    for(i=1;i<(x>y?y:x);i++)
    {
        if(x%i==0&&y%i==0)
        {
            nReceive=i;
        }
    }
    return nReceive;
}
int QB(int G,int x,int y)
{
    int J;
    J=x*y;
    return J/G;
}
int main()
{
    int x,y;
    int R1,R2;
    printf("Input x,y:\n");
    scanf("%d,%d",&x,&y);///��Ӣ�Ķ��Ÿ���
    R1=QY(x,y);
    R2=QB(R1,x,y);
    printf("%d��%d����С������Ϊ%d\n",x,y,R2);
    return 0;
}
