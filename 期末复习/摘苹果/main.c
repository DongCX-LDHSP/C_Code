#include <stdio.h>
#include <stdlib.h>

int GetApple(int a[], int height, int n);
///��������������a����ƻ��������ĸ߶ȣ�
///           height�������հ�����ֱʱ�ܴﵽ�����߶ȣ�
///           nΪƻ����
///�������ܣ�����������ժ����ƻ����Ŀ
int GetApple(int a[], int height, int n)
{
    int chair=30;
    int i;
    for(i=0;i<10;i++)
    {   if(height>=a[i])
        {
            n++;
        }
        else if(height+chair>=a[i])
        {
            n++;
        }
    }
    printf("%d",n);
    return 0;
}
int main()
{
    int a[10];
    int i;
    int height;
    int n=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&height);
    GetApple(a,height,n);
    return 0;
}
