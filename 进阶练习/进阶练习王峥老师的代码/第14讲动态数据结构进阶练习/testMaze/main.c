#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
struct PATH
{
    int m;
    int n;
    struct PATH *next;
    struct PATH *prev;
}*HeadNode=NULL,*CurrentNode=NULL;
enum {NOTPASS,WALL,ENTRY,EXIT,PASS,PEOPLE};
int maze[8][8]= {{1,2,1,1,1,1,1,1},
    {1,0,0,1,0,0,0,1},
    {1,1,0,0,0,1,1,1},
    {1,0,0,1,0,0,0,1},
    {1,1,1,1,0,1,1,1},
    {1,0,0,0,0,0,0,1},
    {1,0,1,0,1,0,0,1},
    {1,1,1,1,1,1,3,1}
};
void DisplayMaze()
{
    int i,j;
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
            if(i==CurrentNode->m&&j==CurrentNode->n)
            {
                printf("%s","＠");
            }
            else
                switch(maze[i][j])
                {
                case NOTPASS:
                case ENTRY:
                    if(i==CurrentNode->m&&j==CurrentNode->n)
                    {
                        printf("%s","＠");
                    }
                    else
                        printf("%s","  ");
                    break;
                case EXIT:
                case PASS:
                    printf("%s","  ");
                    break;
                case WALL:
                    printf("%s","█");
                    break;
                }
        printf("\n");
    }
}
void AddNode(int row,int col)
{
    struct PATH *tempNode;
    if(NULL==HeadNode)
    {
        HeadNode=(struct PATH*)malloc(sizeof(struct PATH));
        CurrentNode=HeadNode;
        CurrentNode->next=NULL;
        CurrentNode->prev=NULL;

    }
    else
    {
        tempNode=(struct PATH*)malloc(sizeof(struct PATH));
        tempNode->next=NULL;
        tempNode->prev=CurrentNode;
        CurrentNode->next=tempNode;
        CurrentNode=tempNode;
    }
    CurrentNode->m=row;
    CurrentNode->n=col;

}
void DelNode()
{
    struct PATH *tempNode;
    tempNode=CurrentNode;
    if(NULL!=CurrentNode->prev)
    {
        CurrentNode=CurrentNode->prev;
        CurrentNode->next=NULL;
    }
    else
    {
        HeadNode=NULL;
    }
    free(tempNode);
}
void FindEntry()
{
    int i;
    for(i=0; i<8; i++)
        if(2==maze[0][i])
        {
            AddNode(0,i);
            //maze[0][i]=5;
        }
}
void FindNextNode()
{
    if(1!=maze[CurrentNode->m+1][CurrentNode->n]&&4!=maze[CurrentNode->m+1][CurrentNode->n])
    {
        if(3!=maze[CurrentNode->m+1][CurrentNode->n])
            maze[CurrentNode->m+1][CurrentNode->n]=4;
        AddNode(CurrentNode->m+1,CurrentNode->n);
        return;
    }
    if(1!=maze[CurrentNode->m][CurrentNode->n-1]&&4!=maze[CurrentNode->m][CurrentNode->n-1])
    {
        if(3!=maze[CurrentNode->m][CurrentNode->n-1])
            maze[CurrentNode->m][CurrentNode->n-1]=4;
        AddNode(CurrentNode->m,CurrentNode->n-1);
        return;
    }
    if(1!=maze[CurrentNode->m][CurrentNode->n+1]&&4!=maze[CurrentNode->m][CurrentNode->n+1])
    {
        if(3!=maze[CurrentNode->m][CurrentNode->n+1])
            maze[CurrentNode->m][CurrentNode->n+1]=4;
        AddNode(CurrentNode->m,CurrentNode->n+1);
        return;
    }
    if(1!=maze[CurrentNode->m-1][CurrentNode->n]&&4!=maze[CurrentNode->m-1][CurrentNode->n])
    {
        if(3!=maze[CurrentNode->m-1][CurrentNode->n])
            maze[CurrentNode->m-1][CurrentNode->n]=4;
        AddNode(CurrentNode->m-1,CurrentNode->n);
        return;
    }
    DelNode();
    return;
}

int main()
{

    FindEntry();
    while(3!=maze[CurrentNode->m][CurrentNode->n])
    {
//        printf("%d,%d\n",CurrentNode->m,CurrentNode->n);
//        printf("%d\n",maze[CurrentNode->m][CurrentNode->n]);
        DisplayMaze();
        FindNextNode();
        Sleep(300);
        system("cls");
    }
    DisplayMaze();
    while(NULL!=HeadNode)
        DelNode();
    printf("祝贺你成功走出迷宫！任按一键继续。。。");
    getch();
    return 0;
}
