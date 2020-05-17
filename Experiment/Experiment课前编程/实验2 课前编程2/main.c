#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nCounter=1;
    while(nCounter<=7)
    {
        switch(nCounter)
        {
        case 1:
            printf("      *      \n");
            printf("             \n");
            break;
        case 2:
        case 6:
            printf("    * * *    \n");
            printf("             \n");
            break;
        case 3:
        case 5:
            printf("  * * * * *  \n");
            printf("             \n");
            break;
        case 4:
            printf("* * * * * * *\n");
            printf("             \n");
            break;
        case 7:
            printf("      *      \n");
            break;
        default:
            break;
        }
        nCounter++;
    }
    return 0;
}
