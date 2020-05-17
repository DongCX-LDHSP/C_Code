#include<stdio.h>
   int main()
   {
       int score;
       char grade;
       printf("Please input score:\n");
       scanf("%d",&score);
       if(score<0||score>100)
             printf("Input error!\n");
        else if(score>=90)
             printf("grade: %c\n",'A');
        else if(score>=80)
             printf("grade: %c\n",'B');
        else if(score>=70)
             printf("grade: %c\n",'C');
        else if(score>=60)
             printf("grade: %c\n",'D');
        else
             printf("grade: %c\n",'E');

        return 0;
}
