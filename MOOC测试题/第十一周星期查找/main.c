#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 7
#define N 10

int main()
{
    char weekDay[M][N]={"Monday","Tuesday","Wednesday",
                        "Thursday","Friday","Saturday","Sunday"};
    char a[N];
    int i,j;
    int flag=1;
    int T=1;
    printf("Please enter a string:\n");
    gets(a);
    for(i=0;i<M;i++)
    {
        T=1;
        for(j=0;weekDay[i][j]!='\0';j++)
        {
            if(!(a[j]==weekDay[i][j]))
            {
                T=0;
                break;
            }
        }
        if(T)
        {
            printf("%s is %d\n",a,i+1);
            flag=0;
        }
    }
    if(flag)
        printf("Not found!\n");
    return 0;
}
