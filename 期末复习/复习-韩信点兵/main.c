#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,n,flag=0;
    printf("�����������������:");
    scanf("%d",&n);
    for(; i<=n; i++)
        if(i%3==2&&i%5==3&&i%7==2)
        {
            flag=1;
            break;
        }
    if(flag)
    {
        printf("%d���ں��ŵı��Ŀ����������£�\n",n);
        for(; i<n; i++)
        {
            if(i%3==2&&i%5==3&&i%7==2)
                printf("%d\n",i);
        }
    }
    else
        printf("���ŵı��Ŀ������������ڣ�%d�����������ޡ�",n);
    return 0;
}
