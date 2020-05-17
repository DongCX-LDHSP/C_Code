#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int x,y,z;
    int flag=1;
    printf("Input n(n<1000):\n");
    scanf("%d",&n);
    for(x=1;x<=9;x++)
    {
        for(y=1;y<=9;y++)
        {
            for(z=0;z<=9;z++)
            {
                if((x+y)*100+(y+z)*10+2*z==n)
                {
                    printf("X=%d,Y=%d,Z=%d\n",x,y,z);
                    flag=0;
                }
            }
        }
    }
    if(flag)
    {
        printf("Invalid\n");
    }
    return 0;
}
