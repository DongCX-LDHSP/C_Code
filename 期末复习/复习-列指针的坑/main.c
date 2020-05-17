#include <stdio.h>

int main()
{
    int a[3][4]={{1,3,5,7},{9,11,13,15},{17,19,21,23}},*p,*q,*r,*s,i,j;
    p=&a[0][0];
    q=a[0];
    r=*a;
    s=a[0];
    for(i=0;i<3;i++,p+=2)
        for(j=0;j<4;j++)
            printf("%2d %8p ",*(p+i*2+j),p+i*2+j);
    printf("\n");
    for(i=0;i<3;i++,q++)
        for(j=0;j<4;j++)
            printf("%2d %8p ",*(q+i*3+j),q+i*3+j);
    printf("\n");
    for(i=0;i<3;i++,r++)
        for(j=0;j<4;j++)
            printf("%2d %8p ",*(r+i*3+j),r+i*3+j);
    printf("\n");
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
            printf("%2d %8p ",*(s+i*4+j),s+i*4+j);
    return 0;
}
