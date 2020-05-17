#include <stdio.h>
#include <stdlib.h>

int mid(int a, int b, int c);
int mid(int a, int b, int c)
{
    if((a>b&&b>c)||(c>b&&b>a))
    {
        printf("The result is %d\n",b);
        return 0;
    }
    else if((b>a&&a>c)||(b<a&&a<c))
    {
        printf("The result is %d\n",a);
        return 0;
    }
    else if((c>b&&c<a)||(c>a&&c<b))
    {
        printf("The result is %d\n",c);
        return 0;
    }
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    mid(a,b,c);
    return 0;
}
