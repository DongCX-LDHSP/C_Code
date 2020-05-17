#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("Input two FENSHU:\n");
    scanf("%d/%d,%d/%d",&a,&b,&c,&d);
    if(a*d>b*c)
        printf("%d/%d>%d/%d\n",a,b,c,d);
    else if(a*d==b*c)
        printf("%d/%d=%d/%d\n",a,b,c,d);
    else
        printf("%d/%d<%d/%d\n",a,b,c,d);
    return 0;
}
