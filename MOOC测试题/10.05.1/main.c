#include <stdio.h>
#include  <math.h>
int main()
{
    int a;
    float b,Price;
    scanf("%d,%f",&a,&b);
    switch(a)
    {
    case 0:if(b>1)
            {
            Price=10+(int)(b)*3;
            printf("Price: %5.2f\n",Price);
            }
           else
            {
            Price=10;
            printf("Price: %5.2f\n",Price);
            }
            break;
    case 1:if(b>1)
           {
           Price=10+(int)(b)*4;
           printf("Price: %5.2f\n",Price);
           }
           else
           {
           Price=10;
           printf("Price: %5.2f\n",Price);
           }
           break;
    case 2:if(b>1)
           {
           Price=10+(int)(b)*5;
           printf("Price: %5.2f\n",Price);
           }
           else
           {
           Price=15;
           printf("Price: %5.2f\n",Price);
           }
           break;
    case 3:if(b>1)
           {
           Price=10+(int)(b)*6.5;
           printf("Price: %5.2f\n",Price);
           }
           else
           {
           Price=15;
           printf("Price: %5.2f\n",Price);
           }
           break;
    case 4:if(b>1)
           {
           Price=10+(int)(b)*10;
           printf("Price: %5.2f\n",Price);
           }
           else
           {
               Price=15;
               printf("Price: %5.2f\n",Price);
           }
           break;
    default:printf("Error in Area\n");
            printf("Price:  0.00");
           break;
    }
    return 0;
}
