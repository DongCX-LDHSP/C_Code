#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct PEOPLE
{
    char name[11];
    int age;
    char sex;
}vs,ss;

int main()
{
    struct PEOPLE *ps;
    ps=&vs;
    FILE *pf;
    int i;
    char c;
    char *str[51];
    float a;
    strcpy(ps->name,"大宝");
    ps->age=36;
    ps->sex='f';
    pf=fopen("d:\\CSample\\text.txt","w+");
    fputs("abcdefg\nhijk",pf);
    printf("%l\n",ftell(pf));
    //fwrite(ps,sizeof(struct PEOPLE),1,pf);
    //fprintf(pf,"%d,%c,%f,%s",34,'a',9.4,"hello!");
//    fputs("Insert ok",pf);
//    rewind(pf);
//    fgets(str,50,pf);
//    printf("%s\n",str);
//    if(NULL==fgets(str,50,pf))
//        printf("已经到文件尾！");
//    //   for(i=0;i<10;i++)
////        fputc('w',pf);
    rewind(pf);
    printf("%d\n",ftell(pf));
    fseek(pf,10l,SEEK_SET);
    printf("%d\n",ftell(pf));
    fgets(str,20,pf);
    printf("%d\n",ftell(pf));
    //fread(&ss,sizeof(struct PEOPLE),1,pf);
    //fscanf(pf,"%d,%c,%f,%s",&i,&c,&a,str);
    //printf("%d,%c,%f,%s\n",i,c,a,str);
    printf("%s\n",str);
    fclose(pf);
    //printf("Hello world!\n");
    return 0;
}
