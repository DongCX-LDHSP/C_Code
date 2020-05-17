#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cFletter,cSletter;
    printf("please input the first letter of someday:\n");
    scanf(" %c",&cFletter);
    if(cFletter=='M'||cFletter=='m')
        printf("monday\n");
    else if(cFletter=='T'||cFletter=='t')
    {
        printf("please input second letter:\n");
        scanf(" %c",&cSletter);
        if(cSletter=='u')
            printf("tuesday\n");
        else if(cSletter=='h')
            printf("thursday\n");
        else
            printf("data error\n");
    }
    else if(cFletter=='S'||cFletter=='s')
    {
        printf("please input second letter:\n");
        scanf(" %c",&cSletter);
        if(cSletter=='a')
            printf("saturday\n");
        else if(cSletter=='u')
            printf("sunday\n");
        else
            printf("data error\n");
    }
    else if(cFletter=='W'||cFletter=='w')
        printf("wednesday\n");
    else if(cFletter=='F'||cFletter=='f')
        printf("friday\n");
    else
        printf("data error\n");
    return 0;
}
