#include <stdio.h>
#include <stdlib.h>
#define N 100

int main()
{
    FILE *test;
    char a[N+1],ch;
    int character=0,digit=0,other=0;
    int refputs;
    test=fopen("test.txt","w+");
    if(test!=NULL)
    {
        printf("�������ı��ļ�������\n");
        gets(a);
        refputs=fputs(a,test);
        rewind(test);
        if(refputs>=0)
        {
            while(!feof(test))
            {
                ch=fgetc(test);
                if(ch!=EOF)
                {
                    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
                        character++;
                    else if(ch>='0'&&ch<='9')
                        digit++;
                    else
                        other++;
                }

            }
            printf("character=%d\ndigit=%d\nother=%d",character,digit,other);
        }
        else
            printf("д�����ʧ�ܣ�");
        fclose(test);
    }
    else
        printf("���ļ�ʧ�ܣ�");
    return 0;
}
