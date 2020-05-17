/*数组模拟乘法.c
 *数组最后一个元素设定为数字的个位数,往前类推,因为要计算阶乘,所以只考虑正数的相乘
 *可以根据需要扩展最大位数
 */
#include <stdio.h>
#define N 100           //可表达的最大位数

void Mult(int a[], int n, int len);

int main( void )
{
    int num[N] = {0};
    num[N-1]  = 1;      //参与计算的数字1,运行后变为两数相乘的结果,因为要计算阶乘,先设定为1的阶乘值1
    num[N-2] = -1;      //标识位,-1以后的数组元素为有效数字
    int n;              //参与计算的数字2,此处为要计算的阶乘数
    scanf( "%d", &n );

    if ( n > 1 ) {      //n大于1时计算阶乘,小于等于1则直接返回结果1
        for ( int i = 1; i <= n; i++ ) {
            Mult(num, i, N);
        }
    }
    //输出结果,当num[i]>0时判定为有效数字开始
    for ( int i = 0; i < N; i++ ) {
        if ( num[i] > 0 ) {
            printf( "%d! = ", n );
            for ( int j = i; j < N; j++ ) {
                printf( "%d", num[j] );
            }
            break;
        }
    }

    return 0;
}
//函数功能:计算 a[] * n 的结果,并把结果返回 a[],参数len为数组长度
void Mult(int a[], int n, int len)
{
    int currentbits = len-1;    //当前计算位数,初始化为个位
    int mult[N] = {0};         //新建数组,存储 a[]*n 的结果
    while ( n ) {
        int i = N-1, index = currentbits;
        while ( a[i] >= 0 ) {       //a[]从个位开始依次与n的最后一位相乘,结果存储在mult[]里
            mult[index] += a[i] * ( n%10 );
            if ( mult[index] > 9 ) {        //当相乘的结果大于9,要计算进位,比如mult[10]=25,则
                mult[index-1] += mult[index]/10;    //mult[10]存储为5,而mult[9]要加2
                mult[index] %= 10;
            }
            i--;
            index--;
        }
        n /= 10;        //计算位数往前移动一位
        currentbits--;  //当前计算位数相应往前移动一位
    }
    //把计算结果从mult[]copy到a[]
    for ( int i = 0; i < len; i++ ) {
        if ( mult[i] > 0 ) {    //mult[i]大于0处开始,后面均为有效数字,开始copy
            a[i-1] = -1;        //先设定标识符
            for ( int j = i; j < len; j++ ) {
                a[j] = mult[j];
            }
            break;
        }
    }
}
