#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20
int main()
{
    char name[3][N]={"tom","jack","rose"};
    char a[N];
    int t=0,j=0,r=0;
    int n,count=1;
    printf("Input the number of electorates:");
    scanf("%d",&n);
    do
    {
        printf("Input vote %d:",count);
        scanf("%s",a);
        if(strcmp(a,*name+0)==0)
            t++;
        else if(strcmp(a,*name+N)==0)
            j++;
        else if(strcmp(a,*name+2*N)==0)
            r++;
        count++;
    }while(count<=n);
    printf("Election results:\n");
    printf("%s:%d\n",*name+0,t);
    printf("%s:%d\n",*name+N,j);
    printf("%s:%d\n",*name+2*N,r);
    if(t>j&&t>r)
        printf("%s wins\n",*name+0);
    else if(j>t&&j>r)
        printf("%s wins\n",*name+N);
    else
        printf("%s wins\n",*name+2*N);
    return 0;
}
