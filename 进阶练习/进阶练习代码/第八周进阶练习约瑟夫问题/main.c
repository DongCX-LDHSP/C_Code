/*
题目内容：
约瑟夫问题：N个人围成一圈，从第一个人开始报数，数到M的人出圈；
再由下一个人开始报数，数到M的人出圈；…输出依次出圈的人的编号。
N，M由键盘输入。

输入格式:
"%d%d"
输出格式：
"%d"
输入样例：
5 3
输出样例：
Please input two integers:
31524
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000]={0};
    int N,M;
    int i;
    int count=0;
    int countout=0;
    printf("Please input two integers:\n");
    scanf("%d%d",&N,&M);
    for(i=0;i<N;i++)
    {
        a[i]=i+1;
    }
    do
    {
        for(i=0;i<N;i++)
        {
            if(a[i]!=0)
            {
                count++;
                if(count%M==0)
                {
                    printf("%d",a[i]);
                    a[i]=0;///对已经输出的数据将其值更新为零，让其死去
                    countout++;
                }
            }
        }
    }while(countout<N);
    return 0;
}




/*
            do
            {
                flag=0;
                for(j=0;j<N;j++)
                {
                    if(a[i]==b[j])
                    {
                        i++;
                        j=0;
                        if(!(i<N))
                        {
                            i=i%5;
                        }
                    }
                    else
                    {
                        flag=1;
                    }
                }
            }while(!flag);
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000]={0};
    int b[1000]={0};
    int N,M;
    int i;
    int j;
    int count=1;
    int countout=0;
    int flag=0;
    ///int control;
    scanf("%d%d",&N,&M);
    for(i=0;i<N;i++)
    {
        a[i]=i+1;
    }
    do
    {
        for(i=0;i<N;i++)
        {
            do
            {
                flag=0;
                for(j=0;j<N;j++)
                {
                    if(a[i]==b[j])
                    {
                        i++;
                        j=0;
                        if(!(i<N))
                        {
                            i=i%5;
                        }
                    }
                    else
                    {
                        flag=1;
                    }
                }
            }while(!flag);
            if(count%M==0)
            {
                printf("%d",a[i]);
                b[i]=a[i];
                countout++;
            }
            count++;
        }
    }while(countout<N);
    return 0;
}
*/
