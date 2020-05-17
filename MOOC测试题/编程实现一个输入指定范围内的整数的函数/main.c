#include <stdio.h>
#include <stdlib.h>

int getint(int min, int max);
int getint(int min, int max)
{
    int i;
    int flag;
    do
    {
        printf("Please enter an integer [%d..%d]:\n",min,max);
        scanf("%d",&i);
        if(i<= max&&i>=min)
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    }while(!flag);
    return i;
}
int main()
{
    int min,max;
    int nReceive;
    printf("Please enter min,max:\n");
    scanf("%d,%d",&min,&max);
    nReceive=getint(min,max);
    printf("The integer you have entered is:%d\n",nReceive);
    return 0;
}
