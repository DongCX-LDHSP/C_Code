#include<stdio.h>
void Input(float wage[], int n);
float Compute(float wage[], int n, float *pmaxwage, float *pminwage);
int main()
{
    float wage[50]={0},maxwage,minwage,avewage;
    int n;
    float *pmaxwage=&maxwage,*pminwage=&minwage;
    printf("Please input n:\n");
    scanf("%d",&n);
    Input(wage,n);
    avewage=Compute(wage,n,pmaxwage,pminwage);
    printf("maxwage=%.2f, minwage=%.2f, avewage=%.2f\n",maxwage,minwage,avewage);
    return 0;
}
void Input(float wage[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%f",&wage[i]);
    }
}
float Compute(float wage[], int n, float *pmaxwage, float *pminwage)
{
    int i;
    float sum=0;
    float R,x;
    *pmaxwage=wage[0];
    *pminwage=wage[0];
    for(i=0;i<n;i++)
    {
        if(wage[i]>*pmaxwage)
        {
            *pmaxwage=wage[i];
        }
        if(wage[i]<*pminwage)
        {
            *pminwage=wage[i];
        }
        sum+=wage[i];
    }
    x=n;
    R=sum/x;
    return R;
}
