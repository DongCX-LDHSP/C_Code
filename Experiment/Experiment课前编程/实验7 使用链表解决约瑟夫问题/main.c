27��ת��һ��Ȧ���ӵ�1���˿�ʼ˳�򱨺ţ�������Ϊ3��3
�ı������˳�Ȧ�ӣ��ҳ��������Ȧ���е�ԭ�������
�����ʽ�������Ȧ�е��˵����Ϊ��%d
#include <stdio.h>
#include <stdlib.h>

struct Joseph
{
    int a;
    struct Joseph *next;
}array[27];
int main()
{
    int i,count=0;
    for(i=0;i<27;i++)
    {
        array[i].a=i+1;
    }
    array[0].next=&array[1];
    for(i=1;i<26;i++)
    {
        array[i].next=&array[i+1];
    }
    array[26].next=&array[0];

    return 0;
}
