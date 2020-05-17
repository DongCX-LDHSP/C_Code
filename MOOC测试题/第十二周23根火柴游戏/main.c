#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=23;
    int gamer,computer;
    printf("Game start!\n");
    printf("Note: the maximum number is 3\n");
    do
    {
        do
        {
            printf("Please enter the number of matches you are moving:\n");
            scanf("%d",&gamer);
            if(gamer<1||gamer>3)
                printf("The number you entered is wrong£¬please re-enter!\n");
            else
                break;
        }while(1);
        a=a-gamer;
        printf("The number of matches you are moving is:%d\n",gamer);
        printf("The number of matches left is:%d\n",a);
        if(a==0)
        {
            printf("I'm sorry. You lost!\n");
            break;
        }
        else
        {
            if(a<3)
                computer=1;
            else
                computer=a%3+1;
            a=a-computer;
            printf("The number of matches that have been moved by the computer is:%d\n",computer);
            printf("The number of matches left is:%d\n",a);
            if(a==0)
            {
                printf("Congratulations£¡You won!\n");
                break;
            }
        }
    }while(1);
    return 0;
}
