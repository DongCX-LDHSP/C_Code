#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,A,B=0,C=0;
    scanf("%d",&n);
    for(A=1;(A*100+B*10+C)<=n;A++,B=0,C=0/*,printf("====%d",A)*/)
    {
        //printf("A%d",A);
        if(A*100+B*10+C==A*A*A+B*B*B+C*C*C)
        {
            printf("%d\n",A*100+B*10+C);
        }
        else
        {
            for(B=0,C=0;B<=9;B++)
            {
                //printf("B%d",B);
                if(A*100+B*10+C==A*A*A+B*B*B+C*C*C)
                {
                    printf("%d\n",A*100+B*10+C);
                }
                else
                {
                    for(C=0;C<=9;C++)
                    {
                        //printf("C%d",C);
                        if(A*100+B*10+C==A*A*A+B*B*B+C*C*C)
                        {
                            printf("%d\n",A*100+B*10+C);
                        }
                    }
                    /*if(A*100+B*10+C==A*A*A+B*B*B+C*C*C)
                        break;*/
                }
            }
        }
    }
    return 0;
}
