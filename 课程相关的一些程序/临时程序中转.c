检测用户输入错误
#include <stdio.h>
#include  <math.h>
int main()
{
    int a,b,c;
    c=scanf("%d %d",&a,&b);
    if(c==2)
    {
     printf("a = %d, b = %d\n",a,b);
    }
    else
    {
        printf("Input error!");
    }
    return 0;
}
闰年判断
#include <stdio.h>
#include  <math.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<1)
    {
     printf("Input error!\n");
    }
    else if((a>'a'&&a<'z')||(a>'A'&&a<'Z'))
    {
        printf("Input error!");
    }
    else if((a%4==0&&a%100!=0)||a%400==0)
    {
       printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
程序改错
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
字符类型判断
#include <stdio.h>
#include  <math.h>
int main()
{
    char a;
    printf("Input simple:\n");
    scanf("%c",&a);
    if((a>'a'&&a<'z')||(a>'A'&&a<'Z'))
    {
     printf("It is an English character.\n");
    }
    else if((int)a>=48&&(int)a<=57)
    {
        printf("It is a digit character.\n");
    }
    else
    {
       printf("It is other character.\n");
    }
    return 0;
}
快递费用计算
#include <stdio.h>
#include  <math.h>
int main()
{
    int a;
    float b,Price;
    scanf("%d,%f",&a,&b);
    switch(a)
    {
    case 0:if(b>1)
            {
            Price=10+(int)(b)*3;
            printf("Price: %5.2f\n",Price);
            }
           else
            {
            Price=10;
            printf("Price: %5.2f\n",Price);
            }
            break;
    case 1:if(b>1)
           {
           Price=10+(int)(b)*4;
           printf("Price: %5.2f\n",Price);
           }
           else
           {
           Price=10;
           printf("Price: %5.2f\n",Price);
           }
           break;
    case 2:if(b>1)
           {
           Price=10+(int)(b)*5;
           printf("Price: %5.2f\n",Price);
           }
           else
           {
           Price=15;
           printf("Price: %5.2f\n",Price);
           }
           break;
    case 3:if(b>1)
           {
           Price=10+(int)(b)*6.5;
           printf("Price: %5.2f\n",Price);
           }
           else
           {
           Price=15;
           printf("Price: %5.2f\n",Price);
           }
           break;
    case 4:if(b>1)
           {
           Price=10+(int)(b)*10;
           printf("Price: %5.2f\n",Price);
           }
           else
           {
               Price=15;
               printf("Price: %5.2f\n",Price);
           }
           break;
    default:printf("Error in Area\n");
            printf("Price:  0.00");
           break;
    }
    return 0;
}
数位拆分2.0
#include <stdio.h>
#include  <math.h>
int main()
{
    int n,a,b,d;
    float c;
    printf("Please input n:\n");
    scanf("%d",&n);
    a=n/100;
    b=n-a*100;
    printf("%d,%d\n",a,b);
    printf("sum=%d,sub=%d,multi=%d\n",a+b,a-b,a*b);
    if(b!=0)
    {
        c=(float)a/b;
        d=a%b;
        printf("dev=%.2f,mod=%d\n",c,d);
    }
    else
    {
        printf("The second operator is zero!\n");
    }
    return 0;
}
出租车计价
#include <stdio.h>
#include  <math.h>
int main()
{
    int time;
    float distance,fee;
    printf("Input distance and time:");
    scanf("%f,%d",&distance,&time);
    if(distance<=3)
        {
            fee=8+2*time/5;
            printf("fee = %.0f\n",fee);
        }
        else if(distance>3&&distance<=10)
            {
                fee=8+(distance-3)*2+2*time/5;
                printf("fee = %.0f\n",fee);
            }
            else
            {
                fee=22+(distance-10)*3+2*time/5;
                printf("fee = %.0f\n",fee);
            }
    return 0;
}
数据区间判断
#include <stdio.h>
#include  <math.h>
int main()
{
    int n;
    printf("Please enter the number:\n");
    scanf("%d",&n);
    if(n>=10000||n<=0)
        {
            printf("error!\n");
        }
        else if(n>=1000&&n<=9999)
            {
                printf("%d: 1000-9999\n",n);
            }
            else if(n>=100&&n<=999)
            {
                printf("%d: 100-999\n",n);
            }
            else if(n>=10&&n<=99)
            {
                printf("%d: 10-99\n",n);
            }
            else if(n>=0&&n<=9)
            {
                printf("%d: 0-9\n",n);
            }
    return 0;
}
计算一元二次方程的根2.0
#include <stdio.h>
#include  <math.h>
#define EPS 1e-6
int main()
{
    float a,b,c,d;
    printf("Please enter the coefficients a,b,c:\n");
    scanf("%f,%f,%f",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
    if(d-0<EPS)
        {
            printf("error!\n");
        }
        else
            {
                printf("x1=%7.4f, x2=%7.4f\n",(d-b)/(2*a),-(d+b)/(2*a));
            }
    return 0;
}
如下全通过
#include <stdio.h>
#include  <math.h>
int main()
{
    float a,b,c,d,x1,x2;
    printf("Please enter the coefficients a,b,c:\n");
    scanf("%f,%f,%f",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
    if(d>=0)
    {
        x1=(-b+d)/(2*a);
        x2=(-b-d)/(2*a);
        printf("x1=%7.4f, x2=%7.4f\n",x1,x2);
    }

    else
        printf("error!\n");
    return 0;
}