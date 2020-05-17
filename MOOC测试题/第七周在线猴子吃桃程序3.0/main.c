#include <stdio.h>
#include <stdlib.h>

int Monkey(int n, int x);
int Monkey(int n, int x)
{
    if(n==2)
    {
        return 4;
    }
    else
    {
        return 2*(Monkey(n-1,2*(x+1))+1);
    }

}
int main()
{
    int n;
    int x;
    printf("Input days n:");
    scanf("%d",&n);
    x=1;
    printf("x=%d\n",Monkey(n,x));
    return 0;
}
