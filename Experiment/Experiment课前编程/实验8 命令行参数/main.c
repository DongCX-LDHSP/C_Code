#include <stdio.h>
#include <stdlib.h>

///�����в�����ֱ���ɣ�Project->Set program's arguments����
///��Ӧ�ļ��ڵ�ǰĿ¼��
int main(int argc,char *argv[])
{
    FILE *first=fopen(argv[1],"a");
    FILE *second=fopen(argv[2],"r");
    char ch;
    if(first!=NULL&&second!=NULL)
    {
        while(!feof(second))
        {
            ch=fgetc(second);
            if(ch!=EOF)
                fputc(ch,first);
        }
        printf("���������!�ɵ���ǰĿ¼�鿴��");
        fclose(first);
        fclose(second);
    }
    else
        printf("���ļ�ʧ�ܣ�");
    return 0;
}
