#include <stdio.h>
#include <stdlib.h>
/*       不使用循环的做法       */
int main()
{
    int flag;
    int num1,num2,ans;
    srand((unsigned)time(NULL));
    flag=rand()%2;
    if(flag)
    {
        num1=rand()%8+2;
        ans=rand()%(num1-1)+11;                                          //rand()%(num1+9-10)+11;
        num2=ans-num1;
        printf("%d+%d=",num1,num2);
    }
    else
    {
        num1=rand()%10;
        if(num1==0)num2=0;
        else num2=rand()%num1+1;
        printf("%d-%d=",num1,num2);
    }
    return 0;
}

/*        以下为使用循环的做法       */
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flag;
    int num1,num2;
    srand((unsigned)time(NULL));
    flag=rand()%2;
    if(flag)
    {
        num1=rand()%10;
        num2=rand()%10;
        while(num1+num2<=10){num1=rand()%10;num2=rand()%10;}
        printf("%d+%d=",num1,num2);
    }
    else
    {
        num1=rand()%10;
        num2=rand()%10;
        while(num1-num2<0){num1=rand()%10;num2=rand()%10;}
        printf("%d-%d=",num1,num2);
    }
    return 0;
}
*/
