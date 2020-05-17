#include <stdio.h>
int main()
{
         float    data1, data2;
         char   op;
         printf("Please enter the expression:");
         scanf("%f %c%f", &data1, &op, &data2); /* %c前有一个空格 */
         switch (op)
         {
                   case '+':
                            printf("%f + %f = %f\n", data1, data2, data1 + data2);
                            break;
                   case '-':
                            printf("%f - %f = %f\n", data1, data2, data1 - data2);
                            break;
                   case '*':
                            printf("%f * %f = %f\n", data1, data2, data1 * data2);
                            break;
                   case '/':
                            printf("%f/%f = %f\n", data1, data2,data1/data2);
                            break;
                   default:
                            printf("Invalid operator!\n");
         }
        return 0;
}
