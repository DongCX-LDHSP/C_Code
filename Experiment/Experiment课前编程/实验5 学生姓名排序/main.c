#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 8

void InputName(char StuName[][N]);
void BubbleSort(char StuName[][N]);
void OutputName(char StuName[][N]);
int main()
{
    char names[N][N];
    InputName(names);
    BubbleSort(names);
    OutputName(names);
    return 0;
}
void InputName(char StuName[][N])
{
    int i;
    for(i=0;i<N;i++)
        gets(*(StuName+i));
}
void BubbleSort(char StuName[][N])
{
    int i,j=0;
    char temp[N];
    do
    {
        j++;
        i=-1;
        do
        {
            i++;
            if(strcmp(*(StuName+i),*(StuName+(i+1)))>0)
            {
                strcpy(temp,*(StuName+i));
                strcpy(*(StuName+i),*(StuName+(i+1)));
                strcpy(*(StuName+(i+1)),temp);
            }
        }while(i<N-j-1);
    }while(j<N-1);
}
void OutputName(char StuName[][N])
{
    int i;
    for(i=0;i<N;i++)
        puts(*(StuName+i));
}
