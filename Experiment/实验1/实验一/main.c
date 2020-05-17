#include <stdio.h>
int main()
{
    int nNum,a,b;
    printf("Please input the number:");
    a=scanf("%d",&nNum);
    if(a!=1||nNum<0)
    {
        printf("Error input!");
    }
    else if(nNum>80)
    {
        printf("number:%dlevel:四级",nNum);
    }
    else//此时nNum>=0&&nNum<=80
    {
        printf("number:%d",nNum);
        b=nNum/10;
        switch(b)
        {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            printf("level:培训");
            break;
        case 5:
            printf("level:一级");
            break;
        case 6:
            printf("level:二级");
            break;
        case 7:
        case 8:
            printf("level:三级");
            break;
        default:
            break;n
        }
    }
    return 0;
}
