#include <stdio.h>
#include <stdlib.h>
#define N 50
typedef struct winners
{
    char name[20];
    int finalScore;
    int classScore;
    char work;
    char west;
    int paper;
    int scholarship;
}WIN;
int FindMax(WIN student[], int n);
int FindMax(WIN student[], int n)
{
    int i,temp=0;
    int max=student[0].scholarship;
    for(i=0;i<n;i++)
    {
        if(max<student[i].scholarship)
        {
            max=student[i].scholarship;
            temp=i;
        }
    }
    printf("%s get the highest scholarship %d\n",student[temp].name,student[temp].scholarship);
    return 0;
}
int main()
{
    int n,i;
    WIN a[N];
    printf("Input n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Input name:");
        scanf("%s",a[i].name);
        printf("Input final score:");
        scanf("%d",&a[i].finalScore);
        printf("Input class score:");
        scanf("%d",&a[i].classScore);
        printf("Class cadre or not?(Y/N):");
        scanf(" %c",&a[i].work);
        printf("Students from the West or not?(Y/N):");
        scanf(" %c",&a[i].west);
        printf("Input the number of published papers:");
        scanf("%d",&a[i].paper);
        a[i].scholarship=0;
        if(a[i].finalScore>80&&a[i].paper>=1)
            a[i].scholarship+=8000;
        if(a[i].finalScore>85&&a[i].classScore>80)
            a[i].scholarship+=4000;
        if(a[i].finalScore>90)
            a[i].scholarship+=2000;
        if(a[i].finalScore>85&&a[i].west=='Y')
            a[i].scholarship+=1000;
        if(a[i].classScore>80&&a[i].work=='Y')
            a[i].scholarship+=850;
        printf("name:%s,scholarship:%d\n",a[i].name,a[i].scholarship);
    }
    FindMax(a,n);
    return 0;
}
