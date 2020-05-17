#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

enum property {road,wall,INTO,EXIT,Road};
enum if_exit {yes,no};
typedef struct path
{
    int row,col;
    struct path *next,*forward;
} PATH;
void putMaze(int maze[][8],PATH *normal);
int main()
{
    int maze[8][8]= {{wall,INTO,wall,wall,wall,wall,wall,wall},
                     {wall,road,road,wall,road,road,road,wall},
                     {wall,wall,road,road,road,wall,wall,wall},
                     {wall,road,road,wall,road,road,road,wall},
                     {wall,wall,wall,wall,road,wall,wall,wall},
                     {wall,road,road,road,road,road,road,wall},
                     {wall,road,wall,road,wall,road,road,wall},
                     {wall,wall,wall,wall,wall,wall,EXIT,wall}};
    int i,j,If_Exit=no;
    PATH *start,*now,*temp;
    start=(PATH*)malloc(sizeof(PATH));
    if(start!=NULL)
    {
        start->forward=NULL;
        start->next=NULL;
        printf("�������ʼ��Ϸ...\n");
        getch();
        for(i=0; i<8&&If_Exit; i++)
        {
            for(j=0; j<8&&If_Exit; j++)
            {
                if(INTO==maze[i][j])
                    If_Exit=yes;
            }
        }
        i--;///�ָ����˳�ǰ״̬
        j--;///�ָ����˳�ǰ״̬
        start->row=i;
        start->col=j;
        now=start;
        If_Exit=no;
        while(EXIT!=maze[now->row][now->col]&&If_Exit)
        {
            system("cls");
            putMaze(maze,now);
            maze[now->row][now->col]=Road;
            ///Sleep(750);
            temp=(PATH*)malloc(sizeof(PATH));
            if(temp!=NULL)
            {
                if(road==maze[now->row+1][now->col]||EXIT==maze[now->row+1][now->col])///down
                {
                    temp->row=now->row+1;
                    temp->col=now->col;
                }
                else if(road==maze[now->row][now->col+1]||EXIT==maze[now->row][now->col+1])///right
                {
                    temp->row=now->row;
                    temp->col=now->col+1;
                }
                else if(road==maze[now->row][now->col-1]||EXIT==maze[now->row][now->col-1])///left
                {
                    temp->row=now->row;
                    temp->col=now->col-1;
                }
                else if(road==maze[now->row-1][now->col]||EXIT==maze[now->row-1][now->col])///up
                {
                    temp->row=now->row-1;
                    temp->col=now->col;
                }
                else///������һ��
                {
                    free(temp);
                    temp=NULL;
                    now=now->forward;
                }
                if(temp!=NULL)///�ж��Ƿ񷵻���һ��
                {
                    now->next=temp;
                    temp->forward=now;
                    temp->next=NULL;
                    now=temp;
                }
            }
            else
                If_Exit=yes;
        }
        if(If_Exit)
        {
            system("cls");
            putMaze(maze,now);
            printf("ף����ɹ��߳��Թ���\n�����������Ϸ...");
            getch();
        }
        else
            printf("�ڴ�����ʧ�ܣ�");
    }
    else
        printf("�ڴ�����ʧ�ܣ�");
    while(start!=NULL)
    {
        free(start);
        start=start->next;
    }
    return 0;
}
void putMaze(int maze[][8],PATH *normal)
{
    int i,j;
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            if(i==normal->row&&j==normal->col&&maze[i][j]!=wall)
                printf("��");
            else if(maze[i][j]==wall)
                printf("��");
            else
                printf("  ");
        }
        printf("\n");
    }
}
