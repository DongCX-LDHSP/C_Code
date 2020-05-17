///编程输出两个字符串中对应位置上相同的字符
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100///可修改N的值以获得不同的效果

int main()
{
    char a[N],b[N];
    int i;
    int counta=0,countb=0,nMincount;
    int flag=0;
    for(i=0;i<N;i++)///初始化a[]和b[]的元素全为-1，便于后续获得用户输入的字符串包含的字符数量
    {
        a[i]=-1;
        b[i]=-1;
    }
    srand(time(0));
    printf("考虑到中英文字符占用字节数的不同，注意切换中英文哦！\n");
    printf("Please input a:");
    gets(a);
    for(i=0;i<N;i++)///利用单个字符不可能是负数的特点，计算a[]的字符数量，
    {
        if(a[i]==-1)
        {
            break;
        }
        counta++;
    }
    printf("Please input b:");
    gets(b);
    for(i=0;i<N;i++)///利用单个字符不可能是负数的特点，计算b[]的字符数量
    {
        if(b[i]==-1)
        {
            break;
        }
        countb++;
    }
    nMincount=counta>countb?countb:counta;
    for(i=0;i<nMincount;i++)
    {
        if(a[i]==b[i])
        {
            printf("第%d位的字符相同为: %c\n",i+1,a[i]);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("没有这样的字符。");
    }
    return 0;
}
