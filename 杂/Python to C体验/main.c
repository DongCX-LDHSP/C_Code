/*Python 实现
# CalStatistics.py
def main():
    Sta = []
    getStatistic(Sta)
    mean1 = Cal_Aver1(Sta)
    mean2 = Cal_Aver2(Sta)
    Vari1 = Cal_Variance(Sta, mean1)
    Vari2 = Cal_Variance(Sta, mean2)
    Mid = Get_Middle(Sta)
    print("平均值是{}，方差是{}，中位数是{}".format(mean1, Vari1, Mid))
    print("平均值是{}，方差是{}，中位数是{}".format(mean2, Vari2, Mid))

def getStatistic(Sta):
    temp = input("请依次输入数据（回车结束）：")
    while temp != '':
        Sta.append(eval(temp))
        temp = input("请依次输入数据（回车结束）：")
    print("你输入的数据如下：\n{}".format(Sta))

def Cal_Aver1(Sta):
    return sum(Sta) / len(Sta)

def Cal_Aver2(Sta):
    Sum_Sta = 0
    for i in Sta:
        Sum_Sta += i
    return Sum_Sta / len(Sta)

def Cal_Variance(Sta, mean):
    s = 0
    for i in Sta:
        s += (i - mean) ** 2
    return s ** 0.5

def Get_Middle(Sta):
    temp = sorted(Sta)
    print(temp)
    if len(temp) % 2 == 0:
        return (temp[len(temp)//2 - 1] + temp[len(temp)//2]) / 2
    return temp[len(temp)//2]

main()
*/

///CalStatistics.c C语言实现
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct test
{
    float num;
    struct test *next;
}ST;

ST *GetSta(int *count);
float CalAver(ST *temp, int *count);
float CalVariance(ST *temp, float aver, int *count);
float GetMid(ST *head, ST *temp, int *count);
void outPutSta(ST *temp);
void freeSta(ST *temp);

int main()
{
    ST *head = NULL, *user = NULL;
    int count = 0;
    float aver, vari, Mid;
    user = head = GetSta(&count);
    if(user != NULL)
    {
        printf("The statistics you input are below:\n");
        outPutSta(user);
        aver = CalAver(user, &count);
        vari = CalVariance(user, aver, &count);
        Mid = GetMid(head, user, &count);
        printf("\n数据的个数为：%d，平均数是：%.2f，方差是：%.2f，中位数是：%.3f\n", count, aver, vari, Mid);
        freeSta(user);
    }
    else
        printf("You didn't input any statistic!\n");
    system("pause");
    return 0;
}

ST *GetSta(int *count)
{
    ST *head, *temp, *gt;
    char a[15];
    int if_exit = 1;
    temp = (ST *)calloc(1, sizeof(ST));
    if(NULL != temp)
    {
        printf("请输入数据(回车结束)：");
        gets(a);
        if(a[0] != '\0')
        {
            temp -> num = atof(a);
            temp -> next = NULL;
            gt = head = temp;
            (*count)++;
        }
        else
        {
            free(temp);
            head = NULL;
            if_exit = 0;
        }
        while(if_exit)
        {
            temp = (ST *)calloc(1, sizeof(ST));
            if(NULL != temp)
            {
                fflush(stdin);
                printf("请输入数据(回车结束)：");
                gets(a);
                if(a[0] != '\0')
                {
                    temp -> num = atof(a);
                    temp -> next = NULL;
                    gt -> next = temp;
                    gt = temp;
                    (*count)++;
                }
                else
                    if_exit = 0;
            }
            else
                printf("No enough memory!");
        }
    }
    else
        printf("No enough memory!");
    return head;
}

float CalAver(ST *temp, int *count)
{
    float sum = 0;
    while(temp != NULL)
    {
        sum += temp -> num;
        temp = temp -> next;
    }
    return sum / *count;
}

float CalVariance(ST *temp, float aver, int *count)
{
    float sum = 0;
    while(temp != NULL)
    {
        sum += pow(temp -> num - aver, 2);
        temp = temp -> next;
    }
    return sqrt(sum / *count);
}

float GetMid(ST *head, ST *temp, int *count)
{
    int i, j, Count = 0, if_even;
    float tempSwap;
    for(i = 0; i < *count; i++)
    {
        temp = head;
        for(j = 0; j < *count - i - 1; j++)
        {
            if(temp -> num > temp -> next -> num)
            {
                tempSwap = temp -> num;
                temp -> num = temp -> next -> num;
                temp -> next -> num = tempSwap;
            }
            temp = temp -> next;
        }
    }
    printf("\nThe sorted statistics are below:\n");
    outPutSta(head);
    temp = head;
    if_even = *count % 2 == 0 ? 1 : 0;
    while(Count < *count / 2 - if_even)
    {
        Count++;
        temp = temp -> next;
    }
    return if_even == 1 ? (temp -> num + temp -> next -> num) / 2 : temp -> num;
}

void outPutSta(ST *temp)
{
    while(NULL != temp)
    {
        printf("%.2f ",temp -> num);
        temp = temp -> next;
    }
}

void freeSta(ST *temp)
{
    ST* tempFree;
    while(temp != NULL)
    {
        tempFree = temp;
        temp = temp -> next;
        free(tempFree);
    }
}
