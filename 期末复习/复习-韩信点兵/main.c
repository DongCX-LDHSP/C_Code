#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,n,flag=0;
    printf("请输入兵的数量上限:");
    scanf("%d",&n);
    for(; i<=n; i++)
        if(i%3==2&&i%5==3&&i%7==2)
        {
            flag=1;
            break;
        }
    if(flag)
    {
        printf("%d以内韩信的兵的可能数量如下：\n",n);
        for(; i<n; i++)
        {
            if(i%3==2&&i%5==3&&i%7==2)
                printf("%d\n",i);
        }
    }
    else
        printf("韩信的兵的可能数量不少于：%d，请增大上限。",n);
    return 0;
}
