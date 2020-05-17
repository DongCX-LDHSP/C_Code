#include <stdio.h>
#include <stdlib.h>

///当前程序实现的是快速幂

void quickpow(int a, int b)
{
    const long long c = 1000000007;
    long long base = a % c, ans = 1;
    while(b)
    {
        if(b & 1)
            ans = ans * base % c;
        base = base * base % c;
        b >>= 1;
    }
    printf("%lld", ans);
}

int main()
{
    int down, up;
    scanf("%d %d", &down, &up);
    quickpow(down, up);
    return 0;
}

