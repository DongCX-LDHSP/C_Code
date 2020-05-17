#include <stdio.h>
int main()
{
  int x1, x2, c;
  do{
    printf("Input x1, x2:");
    c=scanf("%d,%d", &x1, &x2);
    if(c==2&&x1 *x2 < 0)
    {
        printf("x1=%d,x2=%d\n", x1, x2);
    }
    else if(c==2)
    {

    }
    else
    {
        printf("Error input!");
        break;
    }
  }while (x1 * x2 > 0);
  return 0;
}





2，1，4
1，2，3
0，3，2
-1

b   a
4   2
7   3
10 4


        if(a1!=a2&&a1!=a3&&a1!=a4&&a1!=a5&&a1!=a6&&a1!=b1&&a1!=b2&&a1!=b3&&a1!=b4&&
           a2!=a3&&a2!=a4&&a2!=a5&&a2!=a6&&a2!=b1&&a2!=b2&&a2!=b3&&a2!=b4&&
           a3!=a4&&a3!=a5&&a3!=a6&&a3!=b1&&a3!=b2&&a3!=b3&&a3!=b4&&
           a4!=a5&&a4!=a6&&a4!=b1&&a4!=b2&&a4!=b3&&a4!=b4&&
           a5!=a6&&a5!=b1&&a5!=b2&&a5!=b3&&a5!=b4&&
           a6!=b1&&a6!=b2&&a6!=b3&&a6!=b4&&
           b1!=b2&&b1!=b3&&b1!=b4&&
           b2!=b3&&b2!=b4&&
           b3!=b4)
        {
            printf("age=%d\n",age);
            break;
        }
        else
        {
        }
    

猴子吃桃拓展2循环部分
for(;days>=1;days--)
        {
            x=2*(x+1);
            printf("Input days:\n");
            c=scanf("%d",&days);
        }
        x=x/2-1;
        printf("x=%d\n",x);





#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nPut;
    int i=1;
    int check;
    int nPr;
    printf("请输入数字\n");
    check=scanf("%d",&nPut);
    nPr=nPut;
    if(check!=1||nPut<=0)
    {
        printf("wrong input");
    }
    else
    {
        printf("%d=",nPut);
    }
    do
    {
        i++;
        if(nPut%i==0)
        {
            nPut=nPut/i;
            printf("%d",i);
            if(nPut!=i)
            {
                printf("*");
            }
        }
    }while(i<=nPr);
}




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nPut;
    int i=1;
    int check;
    int nPr;
    printf("请输入数字\n");
    check=scanf("%d",&nPut);
    nPr=nPut;
    if(check!=1||nPut<=0)
    {
        printf("wrong input");
    }
    else
    {
        printf("%d=",nPut);
    }
    do
    {
        i++;
        if(nPut%i==0)
        {
            nPut=nPut/i;
            printf("%d",i);
            if(nPut!=i)
            {
                printf("*");
            }
        }
    }while(i<=nPr);
}












#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cCapital;
    int number,i,j,k,m=0;
    printf("Please input a capital:\n");
    scanf("%c",&cCapital);
    number=cCapital-64;
    for(;number>=1;)//控制输出的行数
    {
        for(;m<=number;number--)
        {
            for(i=1;i<=number;i++)//控制输出的空格数
            {
                printf(" ");
            }
            for(j=1;j<=m&&m<=number;j++)//控制字符正序输出
            {
                printf("%c",(j+64));
            }
            for(k=m;k<m;k--)//控制字符倒序输出
            {
                printf("%c",k+64);
            }
            printf("\n");//每输出一行字符换一次行
            m++;
        }
    }
    return 0;
}