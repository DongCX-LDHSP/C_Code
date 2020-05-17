#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("char=%u\n",sizeof(char));
    printf("short=%u\n",sizeof(short));
    printf("int=%u\n",sizeof(int));
    printf("long=%u\n\n",sizeof(long));
    printf("unsigned=%u\n",sizeof(unsigned));
    printf("unsigned int=%u\n",sizeof(unsigned int));
    printf("unsigned short=%u\n",sizeof(unsigned short));
    printf("unsigned long=%u\n\n",sizeof(unsigned long));
    printf("float=%u\n",sizeof(float));
    printf("double=%u\n",sizeof(double));
    printf("long double=%u\n",sizeof(long double));
    system("pause");
    return 0;
}
