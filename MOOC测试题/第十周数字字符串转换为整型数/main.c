#include <stdio.h>
#include <stdlib.h>
#define N 8

int Myatoi(char str[])
{
    int temp[N];
    int i,j;
    int s=0;
    temp[0]=0;
    for(i=0,j=0;i<N;i++)
        if(str[i]>='0'&&str[i]<='9')
        {
            temp[j]=str[i];
            j++;
        }
    for(i=0;i<j;i++)
        s=s*10+(int)(temp[i]-'0');
    return s;
}
int main()
{
    char a[N];
    int R;
    printf("Input a string:");
    scanf("%7s",a);
    R=Myatoi(a);
    printf("%d\n",R);
    return 0;
}
