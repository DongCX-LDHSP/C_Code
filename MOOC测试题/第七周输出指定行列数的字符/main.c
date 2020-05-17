#include <stdio.h>
#include <stdlib.h>

void Chline(char ch, int column, int row);
void Chline(char ch, int column, int row)
{
    int c,r;
    for(r=1;r<=row;r++)
    {
        for(c=1;c<=column;c++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}
int main()
{
    char ch;
    int column,row;
    printf("input a char:\n");
    scanf("%c",&ch);
    printf("input column and row:\n");
    scanf("%d%d",&column,&row);
    Chline(ch,column,row);
    return 0;
}
