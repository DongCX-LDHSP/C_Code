#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    int i=-1;
    int j,nCount_space=0;///ͳ�ƿո���
    int k,nCount_newline=0;///ͳ�ƻس���
    printf("Please input a string end by #:\n");
    do
    {
        i++;
        a[i]=getchar();
    }while(a[i]!='#');
    for(j=0;j<=i;j++)
    {
        if(a[j]==' ')
            nCount_space++;
    }
    for(k=0;k<=i;k++)
    {
        if(a[k]=='\n')
            nCount_newline++;
    }
    printf("space: %d,newline: %d,others: %d\n",nCount_space,nCount_newline,i-nCount_space-nCount_newline);
    return 0;
}
