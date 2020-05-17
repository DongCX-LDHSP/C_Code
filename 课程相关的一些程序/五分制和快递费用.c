they do research and inspire people to protect environment
in the past,there are three to four kids in their families,while now people are willing to have one or two kids in their families. 
#include<stdio.h>
int main()
{
    int score,c;
    char grade;
    printf("Please input score:\n");
    c=scanf("%d", &score);
    if(c!=1||score<0||score>100)
        printf("Input error!\n");
    else if(score>=90)
    {
        grade='A';
        printf("grade: %c\n" ,grade);
    }
    else if(score>=80)
    {
        grade='B';
        printf("grade: %c\n" ,grade);
    }
    else if(score>=70)
    {
        grade='C';
        printf("grade: %c\n" ,grade);
    }
    else if(score>=60)
    {
        grade='D';
        printf("grade: %c\n" ,grade);
    }
    else
    {
        grade='E';
        printf("grade: %c\n" ,grade);
    }
    return 0;
}



快递费用
 #include<stdio.h>
   int main()
   {
       int x;//区域
       float m,M;//质量
       int n;//起步价
       float q;//里程价
       float price;
       scanf("%d,%f",&x,&m);
       if(m<=1)
        M=0;
       if(m>1)
       {
           M=floor(m);
           m=1;
       }
       switch(x)
       {
       case 0: q=3,n=10;break;
       case 1: q=4,n=10;break;
       case 2: q=5,n=15;break;
       case 3: q=6.5,n=15;break;
       case 4: q=10,n=15;break;
       default : printf("Error in Area\n");break;
       }
        price=q*M+n;
        printf("Price: %5.2f\n",price);
   }