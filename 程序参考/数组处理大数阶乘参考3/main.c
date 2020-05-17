/*����ģ��˷�.c
 *�������һ��Ԫ���趨Ϊ���ֵĸ�λ��,��ǰ����,��ΪҪ����׳�,����ֻ�������������
 *���Ը�����Ҫ��չ���λ��
 */
#include <stdio.h>
#define N 100           //�ɱ������λ��

void Mult(int a[], int n, int len);

int main( void )
{
    int num[N] = {0};
    num[N-1]  = 1;      //������������1,���к��Ϊ������˵Ľ��,��ΪҪ����׳�,���趨Ϊ1�Ľ׳�ֵ1
    num[N-2] = -1;      //��ʶλ,-1�Ժ������Ԫ��Ϊ��Ч����
    int n;              //������������2,�˴�ΪҪ����Ľ׳���
    scanf( "%d", &n );

    if ( n > 1 ) {      //n����1ʱ����׳�,С�ڵ���1��ֱ�ӷ��ؽ��1
        for ( int i = 1; i <= n; i++ ) {
            Mult(num, i, N);
        }
    }
    //������,��num[i]>0ʱ�ж�Ϊ��Ч���ֿ�ʼ
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
//��������:���� a[] * n �Ľ��,���ѽ������ a[],����lenΪ���鳤��
void Mult(int a[], int n, int len)
{
    int currentbits = len-1;    //��ǰ����λ��,��ʼ��Ϊ��λ
    int mult[N] = {0};         //�½�����,�洢 a[]*n �Ľ��
    while ( n ) {
        int i = N-1, index = currentbits;
        while ( a[i] >= 0 ) {       //a[]�Ӹ�λ��ʼ������n�����һλ���,����洢��mult[]��
            mult[index] += a[i] * ( n%10 );
            if ( mult[index] > 9 ) {        //����˵Ľ������9,Ҫ�����λ,����mult[10]=25,��
                mult[index-1] += mult[index]/10;    //mult[10]�洢Ϊ5,��mult[9]Ҫ��2
                mult[index] %= 10;
            }
            i--;
            index--;
        }
        n /= 10;        //����λ����ǰ�ƶ�һλ
        currentbits--;  //��ǰ����λ����Ӧ��ǰ�ƶ�һλ
    }
    //�Ѽ�������mult[]copy��a[]
    for ( int i = 0; i < len; i++ ) {
        if ( mult[i] > 0 ) {    //mult[i]����0����ʼ,�����Ϊ��Ч����,��ʼcopy
            a[i-1] = -1;        //���趨��ʶ��
            for ( int j = i; j < len; j++ ) {
                a[j] = mult[j];
            }
            break;
        }
    }
}
