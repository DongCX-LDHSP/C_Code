#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 150

int main()
{
    char name[N][20],(*p)[20],temp[20];
    int i,j,num;
    p=name;
    printf("How many countries?\n");
    scanf("%d",&num);
    getchar();
    printf("Input their names:\n");
    for(i=0;i<num;i++)
        gets(p+i);
    for(i=0;i<num-1;i++)
        for(j=0;j<num-i-1;j++)
            if(strcmp(p+j,p+j+1)>0)
            {
                strcpy(temp,p+j+1);
                strcpy(p+j+1,p+j);
                strcpy(p+j,temp);
            }
    printf("Sorted results:\n");
    for(i=0;i<num;i++)
        puts(p+i);
    return 0;
}
