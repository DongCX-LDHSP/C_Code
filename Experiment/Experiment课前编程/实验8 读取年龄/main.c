#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,sum,count,temp;
    char ch[92];
    FILE *age;
    age=fopen("age.txt","r");
    if(age!=NULL)
    {
        while(!feof(age))
        {
            if((fgets(ch,92,age))!=NULL)
            {

                for(i=0,sum=0,count=0,temp=0;ch[i]!='\0';i++)
                {
                    if('0'<=ch[i]&&ch[i]<='9')
                        temp=temp*10+(int)(ch[i]-'0');
                    else
                    {
                        sum+=temp;
                        count++;
                        temp=0;
                    }
                }
                printf("%d\n",sum/count);
            }

        }
    }
    else
        printf("Open the file failed!");
    return 0;
}
