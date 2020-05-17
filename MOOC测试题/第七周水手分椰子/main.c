/*“水手分椰子”类型题完整而又简易的通解公式:
         y=a^n-db/c

    y── 被分的某东西的总个数，
    a── 每次分的总份数(一般情况下，是总人数)， n
    n── 总共分的次数，                         n
    c── 分a份后拿走的份数，                    1
    b── 每次分a份后的余数，                    1
    d── 每次分a份拿走c份后剩下再分的份数，     n-1
    注；当b÷c不为自然数时，则此时此题无解, 也即y无解。*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int y;
    printf("Input n(1<n<=5):\n");
    scanf("%d",&n);
    if(n<=1||n>5)
    {
        printf("Error!\n");
    }
    else
    {
        y=pow(n,n)-(n-1);
        printf("y=%d\n",y);
    }
    return 0;
}
