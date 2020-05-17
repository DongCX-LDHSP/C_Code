#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 15

int Inverse(char str1[], char str2[N][N]);
int Inverse(char str1[], char str2[N][N])
{
    int count=0,i,j=0,k,l=0,countout=0;
    int m,n;
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]==' ')
        {
            count++;
        }
    }
    do
    {
        for(k=0;str1[l]!=' ';l++,k++)
        {
            str2[j][k]=str1[l];
        }
        l++;
        j++;
    }while(k<=++count&&str1[l]!='\0');
    j--;
    for(n=0;str2[j][n]!='\0';n++)
    {
        ;
    }
    m=j+1;
    str2[m][0]=str2[j][n-1];
    str2[j][n-1]='\0';
    for(;j>=0;j--)
    {
        for(k=0;str2[j][k]!=0;k++)
        {
            printf("%c",str2[j][k]);
        }
        countout++;
        if(countout<++count)
        {
            printf(" ");
        }
        else
        {
            printf("%c",str2[m][0]);
        }
    }
    return 0;
}
int main()
{
    char str1[6*N],str2[N][N]={'0'};
    printf("Input a sentence:");
    gets(str1);
    Inverse(str1,str2);
    return 0;
}
