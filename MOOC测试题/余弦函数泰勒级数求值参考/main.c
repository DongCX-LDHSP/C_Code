#include<stdio.h>
#include<math.h>
void main(){
double x,term,sum,x2;
int i;
printf("input x in HuDu\n");
scanf("%lf",&x);
x2 = x * x;
sum = 1.0;
term = 1.0;
for (i=2;i<20;i=i+2){
term = term*x2/(double) (i * (i-1)) * (-1.0);
if (fabs(term) < 1.0E-07) break;
sum = sum + term;
}
printf("cos(x)=%lf\n",sum);
}
