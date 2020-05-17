#include <stdio.h>
#include <stdlib.h>

///命令行参数可直接由：Project->Set program's arguments输入
///相应文件在当前目录下
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
        printf("已连接完成!可到当前目录查看。");
        fclose(first);
        fclose(second);
    }
    else
        printf("打开文件失败！");
    return 0;
}
