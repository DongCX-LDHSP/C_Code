#include <stdio.h>
#include <stdlib.h>
void calFactorial(int a[],int n);
void getFactorial(int a[]);
int count;
int main(){
    int a[3000];
    for(int k = 1; k<=40; k++){
        calFactorial(a,k);
        printf("%d! = ",k);
        getFactorial(a);
        printf("\n");
    }
    return 0;
}
void calFactorial(int a[],int n){
    count = -1;
    int d = n,b,c;
    if(n ==0||n==1){
        a[++count] = 1;
    }
    else{
        do{
            a[++count] = d % 10;
            d = d/10;
        }while(d>0);
        for(int i = n-1; i>=2; i--){
            c = 0;
            for(int j=0; j<=count; j++){
                b = a[j]*i+c;
                a[j] = b%10;
                c = b/10;
            }
            while(c != 0){
                a[++count] = c%10;
                c = c/10;
            }
        }
    }
}
void getFactorial(int a[]){
    for(int i = count; i>=0; i--){
        printf("%d",a[i]);
    }
}
