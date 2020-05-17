#include <stdio.h>
#include <stdlib.h>
#define N 100

int main()
{
    char t[N+1],f[N+1];
    char c[N+1];///存储重复的部分
    int flag,i,j;
    int temp;
    scanf("%s%s",t,f);
    getchar();
    for(i=0,j=0;t[i]!='\0';i++)
    {
        flag=1;
        if(t[i]==f[j])
        {
            temp=i;///store the value of i before we step into the "for" sentence
            for(;f[j]!='\0'&&t[i]!='\0';i++,j++)
            {
                if(t[i]==f[j])
                {
                    c[j]=f[j];
                }
                else
                {
                    flag=0;
                    i=temp;
                    j=0;
                    c[0]='\0';
                    break;
                }
            }
            if(flag)
            {
                c[j]='\0';
                printf("%s\n",c);
            }
        }
    }
    return 0;
}
