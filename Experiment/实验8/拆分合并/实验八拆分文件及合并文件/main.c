#include <stdio.h>
#include <stdlib.h>

void Division(FILE *pt,FILE *pf,FILE *ps);
void Combination(FILE *pf,FILE *ps,FILE *pc);
int main()
{
    FILE *first,*second,*temp,*comb;
    temp=fopen("stRecord1.txt","r+");
    first=fopen("stR1.txt","w+");
    second=fopen("stR2.txt","w+");
    comb=fopen("student.txt","w");
    if(first!=NULL&&second!=NULL&&temp!=NULL&&comb!=NULL)
    {
        Division(temp,first,second);
        printf("The file has been departed!\n");
        system("pause");
        Combination(first,second,comb);
        printf("The files has been combined!\n");
        system("pause");
        fclose(temp);
        fclose(first);
        fclose(second);
        fclose(comb);
    }
    else
        printf("Open the file failed!");
    return 0;
}
void Division(FILE *pt,FILE *pf,FILE *ps)
{
    char ch;
    int i=0,j=0;
    while(!feof(pt))///统计行数
        if((ch=fgetc(pt))!=EOF)
            if(ch=='\n')
                i++;
    rewind(pt);
    while(!feof(pt)&&j<(i+1)/2)
        if((ch=fgetc(pt))!=EOF);
        {
            fputc(ch,pf);
            if(ch=='\n')
                j++;
        }
    while(!feof(pt))
        if((ch=fgetc(pt))!=EOF)
            fputc(ch,ps);
}
void Combination(FILE *pf,FILE *ps,FILE *pc)
{
    char ch;
    rewind(pf);
    rewind(ps);
    while(!feof(pf))
        if((ch=fgetc(pf))!=EOF)
            fputc(ch,pc);
    while(!feof(ps))
        if((ch=fgetc(ps))!=EOF)
            fputc(ch,pc);
}
