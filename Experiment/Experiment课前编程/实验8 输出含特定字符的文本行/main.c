#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    FILE *test,*store;
    char s[100],get,ch;
    int i;
    printf("Ҫ�޸� test.txt ������,��ǰ����ǰĿ¼�޸Ĳ�����\n�޸�����밴���������\n");
    getch();
    test=fopen("test.txt","r");
    store=fopen("store.txt","w+");
    if(test!=NULL&&store!=NULL)
    {
        printf("�����ļ����������£�\n");
        while(!feof(test))
        {
            ch=fgetc(test);
            if(ch!=EOF)
                printf("%c",ch);
        }
        printf("\n������һ���ַ�:");
        scanf("%c",&get);
        rewind(test);
        printf("�����ַ�(%c)��������:\n",get);
        while(!feof(test))
        {
            if((fgets(s,100,test))!=NULL)
                for(i=0;s[i]!='\0';i++)
                    if(s[i]==get)
                    {
                        printf("%s",s);
                        fputs(s,store);
                        break;
                    }
        }
        fclose(test);
        fclose(store);
    }
    else
        printf("���ļ�ʧ�ܣ�");
    return 0;
}
