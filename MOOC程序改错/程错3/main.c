#include <stdio.h>
int main()
{
    int x1,x2,nReturn;
    do
    {
        printf("Input x1,x2:");
        nReturn=scanf("%d,%d",&x1,&x2);
        if(nReturn!=2)
        {
            while(getchar()=='\n');
            {
                continue;
            }
        }
        else
        {

        }
    }while(x1*x2>=0);
    printf("x1=%d,x2=%d\n",x1,x2);
    return 0;
}
