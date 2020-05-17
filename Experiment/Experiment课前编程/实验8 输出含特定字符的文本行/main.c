#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    FILE *test,*store;
    char s[100],get,ch;
    int i;
    printf("要修改 test.txt 的内容,请前往当前目录修改并保存\n修改完毕请按任意键继续\n");
    getch();
    test=fopen("test.txt","r");
    store=fopen("store.txt","w+");
    if(test!=NULL&&store!=NULL)
    {
        printf("给定文件的内容如下：\n");
        while(!feof(test))
        {
            ch=fgetc(test);
            if(ch!=EOF)
                printf("%c",ch);
        }
        printf("\n请输入一个字符:");
        scanf("%c",&get);
        rewind(test);
        printf("含有字符(%c)的行如下:\n",get);
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
        printf("打开文件失败！");
    return 0;
}
