#include<stdio.h>

int main()
{
    int score;
    char grade;
    int c;
    int flag;
    do
    {
        printf("Please input score:\n");
        c=scanf("%d",&score);
        getchar();
        if(score<0||score>100||c!=1)
        {
            printf("Input error!\n");
            flag=1;
        }
        else
            flag=0;
    }while(flag);
    if(score>=90)
        grade='A';
    else if(score>=80)
        grade='B';
    else if(score>=70)
        grade='C';
    else if(score>=60)
        grade='D';
    else
        grade='E';
    printf("grade: %c\n",grade);
    return 0;
}
