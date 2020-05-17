#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cFirst[100],cSecond[100];
    int i,flag=1;
    printf("Input the first string.\n");
    gets(cFirst);
    printf("Input the second string.\n");
    gets(cSecond);
    for(i=0; cFirst[i]!='\0'&&cSecond!='\0'; i++)
        if(flag&&cFirst[i]==cSecond[i])
        {
            printf("The common characters on the same location are below:\n");
            printf("The %d character is the common character:%c\n",i,cFirst[i]);
            flag=0;
        }
        else if(cFirst[i]==cSecond[i])
            printf("The %d character is the common character:%c\n",i,cFirst[i]);
    if(flag)
        printf("They don't have common characters on the same location.");
    return 0;
}
