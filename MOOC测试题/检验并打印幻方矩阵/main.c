#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5][5];
    int r[5]={0};
    int c[5]={0};
    int L1=0,L2=0;
    int i,j;
    //int flag=1;
    for(i=0;i<5;i++)//矩阵的录入
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    /*for(i=0;i<5;i++)//初始化数组
    {
        r[i]=0;
        c[i]=0;
    }*/
    for(i=0;i<5;i++)//计算每一行的和
    {
        for(j=0;j<5;j++)
        {
            r[i]+=a[i][j];
        }
    }
    for(j=0;j<5;j++)//计算每一列的和
    {
        for(i=0;i<5;i++)
        {
            c[j]+=a[i][j];
        }
    }
    for(i=0,j=0;i<5;i++,j++)//计算主对角线的和
    {
        L1+=a[i][j];
    }
    for(i=0,j=4;i>=0;i++,j--)//计算副对角线的和
    {
        L2+=a[i][j];
    }
    //割裂处
    if(r[0]+r[1]+r[2]+r[3]+r[4]+c[0]==c[1]+c[2]+c[3]+c[4]+L1+L2)
    {
        printf("It is a magic square!\n");
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                printf("%4d",a[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("It is not a magic square!\n");
    }
    /*if(flag)
    {

    }*/
    return 0;
}



/*一个方法
for(i=0;i<4;i++)
    {
        if(r[i]!=r[i+1])
        {
            flag=0;
            printf("It is not a magic square!\n");
            break;
        }
    }
    if(flag)
    {
        if(r[0]==c[0])
        {
            for(i=0;i<4;i++)
            {
                if(c[i]!=c[i+1])
                {
                    flag=0;
                    printf("It is not a magic square!\n");
                    break;
                }
            }
            if(flag)
            {
                if(c[0]==L1&&c[0]==L2)
                {
                    printf("It is a magic square!\n");
                }
                else
                {
                    flag=0;
                    printf("It is not a magic square!\n");
                }
            }
        }
    }
    if(flag)
    {
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                printf("%4d",a[i][j]);
            }
            printf("\n");
        }
    }*/



/*另一个方法
if(r[0]+r[1]+r[2]+r[3]+r[4]+c[0]==c[1]+c[2]+c[3]+c[4]+L1+L2)
    {
        printf("It is a magic square!\n");
    }
    else
    {
        flag=0;
        printf("It is not a magic square!\n");
    }
    if(flag)
    {
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                printf("%4d",a[i][j]);
            }
            printf("\n");
        }
    }*/

/*一种方法的修改
for(i=0;i<4;i++)
    {
        if(r[i]!=r[i+1])
        {
            flag=0;
            printf("It is not a magic square!\n");
            break;
        }
    }
    if(flag)
    {
        if(r[0]==c[0])
        {
            for(i=0;i<4;i++)
            {
                if(c[i]!=c[i+1])
                {
                    flag=0;
                    printf("It is not a magic square!\n");
                    break;
                }
            }
            if(flag)
            {
                if(c[0]==L1&&c[0]==L2)
                {
                    printf("It is a magic square!\n");
                }
                else
                {
                    flag=0;
                    printf("It is not a magic square!\n");
                }
            }
        }
        else
        {
            flag=0;
            printf("It is not a magic square!\n");
        }
    }
    if(flag)
    {
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                printf("%4d",a[i][j]);
            }
            printf("\n");
        }
    }
*/
