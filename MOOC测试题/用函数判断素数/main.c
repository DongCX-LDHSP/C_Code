#include <stdio.h>
#include <stdlib.h>

int fun(int pm);
int fun(int pm)
{
    int i;
    for(i=2;i<=pm/2;i++)
    {
        if(pm%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int pm;
    int R;
    printf("Input pm:\n");
    scanf("%d",&pm);
    R=fun(pm);
    if(R==1)
    {
        printf("%d是素数.\n",pm);
    }
    else
    {
        printf("%d不是素数.\n",pm);
    }
    return 0;
}
