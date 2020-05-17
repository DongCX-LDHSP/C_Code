#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5

int main()
{
    char name[N][20],(*p)[20],temp[20];
    int i,j;
    p=name;
    printf("Input five countries' names:\n");
    for(i=0;i<N;i++)
        gets(p+i);
    for(i=0;i<N-1;i++)
        for(j=0;j<N-i-1;j++)
            if(strcmp(p+j,p+j+1)>0)
            {
                strcpy(temp,p+j+1);
                strcpy(p+j+1,p+j);
                strcpy(p+j,temp);
            }
    printf("The minimum is:%s\n",p);
    return 0;
}
