1）
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int man,women,children;
    printf("Man   Women   Children\n");
    for(man=0;man<=16;man++)
    {
        for(women=0;women<=25;women++)
        {
            for(children=0;children<=50;children++)
            {
                if(man+women+children==30&&3*man+2*women+1*children==50)
                {
                    printf("%3d%8d%8d\n",man,women,children);
                }
            }
        }
    }
    return 0;
}
2）
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a1,a2,a3,a4,a5,a6,b1,b2,b3,b4,age=10,A,B;//A=四位数字,B=六位数字
    for(age=10;age<=22&&age>=10;age++)
    {
        A=age*age*age;
        b1=A/1000;
        b2=(A-b1*1000)/100;
        b3=(A-b1*1000-b2*100)/10;
        b4=(A-b1*1000-b2*100-b3*10)/1;
        B=A*age;
        a1=B/100000;
        a2=(B-a1*100000)/10000;
        a3=(B-a1*100000-a2*10000)/1000;
        a4=(B-a1*100000-a2*10000-a3*1000)/100;
        a5=(B-a1*100000-a2*10000-a3*1000-a4*100)/10;
        a6=(B-a1*100000-a2*10000-a3*1000-a4*100-a5*10)/1;
        if((a1!=a2)&&(a1!=a3)&&(a1!=a4)&&(a1!=a5)&&(a1!=a6)&&(a1!=b1)&&(a1!=b2)&&(a1!=b3)&&(a1!=b4)&&
           (a2!=a3)&&(a2!=a4)&&(a2!=a5)&&(a2!=a6)&&(a2!=b1)&&(a2!=b2)&&(a2!=b3)&&(a2!=b4)&&
           (a3!=a4)&&(a3!=a5)&&(a3!=a6)&&(a3!=b1)&&(a3!=b2)&&(a3!=b3)&&(a3!=b4)&&
           (a4!=a5)&&(a4!=a6)&&(a4!=b1)&&(a4!=b2)&&(a4!=b3)&&(a4!=b4)&&
           (a5!=a6)&&(a5!=b1)&&(a5!=b2)&&(a5!=b3)&&(a5!=b4)&&
           (a6!=b1)&&(a6!=b2)&&(a6!=b3)&&(a6!=b4)&&
           (b1!=b2)&&(b1!=b3)&&(b1!=b4)&&
           (b2!=b3)&&(b2!=b4)&&
           (b3!=b4))
        {
            printf("age=%d\n",age);
            break;
        }
        else
        {
        }
    }
    return 0;
}
3）闰年相关的问题3.0
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int birth,now,count=0;
    printf("Input your birth year:");
    scanf("%d",&birth);
    printf("Input this year:");
    scanf("%d",&now);
    for(;birth<=now;birth++)
    {
        if((birth%4==0&&birth%100!=0)||birth%400==0)
        {
            printf("%d\n",birth);
            count++;
        }
    }
    printf("count=%d\n",count);
    return 0;
}
4）
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int birth,it,now,count=0;
    long unsigned heart_beats;
    printf("Input your birth year:");
    scanf("%d",&birth);
    printf("Input this year:");
    scanf("%d",&now);
    for(it=birth;it<now;it++)
    {
        if((it%4==0&&it%100!=0)||it%400==0)
        {
            count++;
        }
    }
    heart_beats=((now-birth-count)*365*24*60+count*366*24*60)*75;
    printf("The heart beats in your life: %lu",heart_beats);
    return 0;
}