#include"stdio.h"
int input(unsigned long *p,float *q,int k)
{
   int i/*,j*/;
   printf("Input student's ID, name and score:\n");
   for (i=0;i< k;i++)
       scanf("%ld%f",p+i,q+i);
   return 0;
}
int cal(float *p,int k)
{
   int i;float sum=0,av=0;
   for (i=0;i< k;i++)
       sum+=*(p+i);
   av=sum/k;
   printf("sum=%.0f,aver=%.2f\n",sum,av);
   return 0;
}
int swap(unsigned long *p,float *q,int i,int j)
{
   unsigned long t1;float t2;
   t1=*(p+i);
   *(p+i)=*(p+j);
   *(p+j)=t1;
   t2=*(q+i);
   *(q+i)=*(q+j);
   *(q+j)=t2;

   return 0;
}
int sortsc(unsigned long *p,float *q,int k)
{
   int i,j,max;
   for (i=0;i< k-1;i++)
   {
       max=i;
       for (j=i+1;j< k;j++)
           if (*(q+j)>*(q+max)) max=j;
       swap(p,q,i,max);
   }

   return 0;
}
int sortst(unsigned long *p,float *q,int k)
{
   int i,j,max;
   for (i=0;i< k-1;i++)
   {
       max=i;
       for (j=i+1;j< k;j++)
           if (*(p+j)<*(p+max)) max=j;
       swap(p,q,i,max);
   }

   return 0;
}
int sebn(unsigned long *p,float *q,int k)
{
   unsigned long sc;
   int i,ans=k;
   printf("Input the number you want to search:\n");
   scanf("%ld",&sc);
   for (i=0;i< k;i++)
       if (*(p+i)==sc) ans=i;
   if (ans!=k) printf("%ld\t%.0f\n",*(p+ans),*(q+ans));
   else printf("Not found!\n");

   return 0;
}
int stan(float *q,int k)
{
   int num[6],i;
   for (i=0;i< 6;i++) num[i]=0;
   for (i=0;i< k;i++)
   {
       if (*(q+i)>99) {num[0]++;continue;}
       if (*(q+i)>89) {num[1]++;continue;}
       if (*(q+i)>79) {num[2]++;continue;}
       if (*(q+i)>69) {num[3]++;continue;}
       if (*(q+i)>59) {num[4]++;continue;}
                      {num[5]++;}
   }
   printf("<60\t%d\t%.2f%%\n",num[5],100.0*num[5]/k);
   printf("60-69\t%d\t%.2f%%\n",num[4],100.0*num[4]/k);
   printf("70-79\t%d\t%.2f%%\n",num[3],100.0*num[3]/k);
   printf("80-89\t%d\t%.2f%%\n",num[2],100.0*num[2]/k);
   printf("90-99\t%d\t%.2f%%\n",num[1],100.0*num[1]/k);
   printf("100\t%d\t%.2f%%\n",num[0],100.0*num[0]/k);

   return 0;
}
int main()
{
  int n,flag=1,a,i;
  float sc[30];
  unsigned long st[30];
  printf("Input student number(n<30):\n");
  scanf("%d",&n);
  while(flag)
  {
       printf("Management for Students' scores\n");
       printf("1.Input record\n");
       printf("2.Caculate total and average score of course\n");
       printf("3.Sort in descending order by score\n");
       printf("4.Sort in ascending order by number\n");
       printf("5.Search by number\n");
       printf("6.Statistic analysis\n");
       printf("7.List record\n");
       printf("0.Exit\n");
       printf("Please Input your choice:\n");
       scanf("%d",&a);
       switch (a)
       {
           case 1:
               input(st,sc,n);
               break;
           case 2:
               cal(sc,n);
               break;
           case 3:
               sortsc(st,sc,n);
               printf("Sort in descending order by score:\n");
               for (i=0;i< n;i++)
                   printf("%ld\t%.0f\n",st[i],sc[i]);
               break;
           case 4:
               sortst(st,sc,n);
               printf("Sort in ascending order by number:\n");
               for (i=0;i< n;i++)
                   printf("%ld\t%.0f\n",st[i],sc[i]);
               break;
           case 5:
               sebn(st,sc,n);
               break;
           case 6:
               stan(sc,n);
               break;
           case 7:
               for (i=0;i< n;i++)
                   printf("%ld\t%.0f\n",st[i],sc[i]);
               break;
           case 0:
               flag=0;
               printf("End of program!\n");
               break;
           default:
               printf("Input error!\n");
       }

  }

  return 0;
}
