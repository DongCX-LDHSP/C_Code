#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    char *name[4];
    for(i=0;i<4;i++)
    {
        printf("Input the %d name:\n",i+1);
        name[i]=(char *)malloc(30*sizeof(char));
        gets(name[i]);
        printf("The %d name is:\n%s\n",i+1,name[i]);
        free(name[i]);
    }
    return 0;
}
