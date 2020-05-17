#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nYear,nMonth;
    int nError;
    printf("Input year,month:\n");
    nError=scanf("%d,%d",&nYear,&nMonth);
    if(nError!=2||!(nMonth<=12&&nMonth>=1))
    {
        printf("Input error!\n");
    }
    else
    {
        switch(nMonth)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days\n");
            break;
        case 2:
            if((nYear%4==0&&nYear%100!=0)||nYear%400==0)
            {
                printf("29 days\n");
            }
            else
            {
                printf("28 days\n");
            }
            break;
        default:
            break;
        }
    }
    return 0;
}
