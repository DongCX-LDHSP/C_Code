#include  <stdlib.h>
#include  <stdio.h>

int main()
{
    int number,num,a,counter,zero,one,two,three,
        four,five,six,seven,eight,nine;
    printf("Please enter the number:\n");
    scanf("%d",&number);
    a=number;
    for(counter=0;num>
    0;counter++)
    {
        num=a%10;
        number=(a-num)/10;
        if(num==0)
    }
    printf("%d: %d bits\n",number,counter-1);
    return 0;
}
