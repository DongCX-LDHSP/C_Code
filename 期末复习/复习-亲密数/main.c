#include <stdio.h>
#include <stdlib.h>

/*Explanation of this program
Output the "亲密数" less than n*/
int Cal_Factor_Sum(int m)
{
    int j=1,sum=0,And;
    for(j=1,And=j*j; And<=m; j++,And=j*j)
        if(m%j==0)
        {
            if(j==1||And==m)
                sum+=j;
            else
                sum+=j+m/j;
        }
    return sum;
}
int main()
{
    int n,flag=1;
    printf("Input n:");
    scanf("%d",&n);
    for(int i=2,sum1,sum2; i<=n; i++)
    {
        sum1=Cal_Factor_Sum(i);
        sum2=Cal_Factor_Sum(sum1);
        if(flag==1&&sum2==i&&i<sum1)
        {
            printf("%d以内的亲密数对有：\n(%d,%d)\n",n,i,sum1);
            flag=0;
        }
        else if(i<sum1&&sum2==i)
            printf("(%d,%d)\n",i,sum1);
    }
    if(flag)
        printf("%d以内没有亲密数对。",n);
    return 0;
}
