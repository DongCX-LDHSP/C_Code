#include<stdio.h>

typedef struct student
{
	long ID;
	float score;
} STU;
int main()
{
	int n; int k;float sum = 0;
	STU stu[30];
	printf("Input student number(n<30):\n");
	scanf("%d",&n);
	do {
		printf("Management for Students' scores\n");
		printf("1.Input record\n");
		printf("2.Caculate total and average score of course\n");
		printf("3.Sort in descending order by score\n");
		printf("4.Sort in ascending order by score\n");
		printf("5.Sort in ascending order by number\n");
		printf("6.Search by number\n");
		printf("7.Statistic analysis\n");
		printf("8.List record\n");
		printf("0.Exit\n");
		printf("Please Input your choice:\n");
		scanf("%d",&k);
		if (k == 1)
		{printf("Input student's ID and score:\n");
			for (int i = 0; i < n; i++)
			{
				scanf("%ld%f", &stu[i].ID, &stu[i].score);
				sum += stu[i].score;
			}
		}
		else if (k >= 9 || k < 0)
		{
			printf("Input error!\n");
		}
		else if(k == 0)
		{
			printf("End of program!");
			break;
		}
		else if (k == 2)
		{
			printf("sum=%.0f,aver=%.2f\n",sum,sum/n);
		}
		else if (k == 3)
		{
			printf("Sort in descending order by score:\n" );
			int q, w, e;float temp1; long temp2;
			for (q = 0; q < n - 1; q++)
			{
				e = q;
				for (w = q + 1; w < n; w++)
				{
					if (stu[w].score > stu[e].score)
					{
						e = w;
					}
				}
				if (e != q)
				{
					temp1 = stu[e].score; stu[e].score = stu[q].score; stu[q].score = temp1;
					temp2 = stu[e].ID; stu[e].ID = stu[q].ID; stu[q].ID = temp2;
				}
			}
			for (int i = 0; i < n; i++)
			{
				printf("%ld\t%.0f\n", stu[i].ID, stu[i].score);
			}
		}
		else if (k == 4) {
			printf("Sort in ascending order by score:\n");
			for (int ii = n - 1; ii >= 0; ii--)
			{
				printf("%ld\t%.0f\n", stu[ii].ID, stu[ii].score);
			}}
		else if(k == 5)
		{
			printf("Sort in ascending order by number:\n");
			int q1, w1, e1; float temp11; long temp21;
			for (q1 = 0; q1 < n - 1; q1++)
			{
				e1 = q1;
				for (w1= q1 + 1; w1 < n; w1++)
				{
					if (stu[w1].ID > stu[e1].ID)
					{
						e1 = w1;
					}
				}
				if (e1 != q1)
				{
					temp11 = stu[e1].score; stu[e1].score = stu[q1].score; stu[q1].score = temp11;
					temp21= stu[e1].ID; stu[e1].ID = stu[q1].ID; stu[q1].ID = temp21;
				}
			}
			for (int i = n-1; i>=0; i--)
			{
				printf("%ld\t%.0f\n", stu[i].ID, stu[i].score);
			}
		}
		else if (k == 6)
		{
			long num;
			int /*numx,*/count=0;
			printf("Input the number you want to search:\n");
			scanf("%ld",&num);
			for (int i = 0; i < n; i++)
			{
				if (stu[i].ID == num)
				{
					printf("%ld\t%.0f\n", stu[i].ID, stu[i].score);
					break;
				}
				count++;
			}
			if (count >= n)
			{
				printf("Not found!\n");
			}
		}
		else if (k == 7)
		{
			int i6=0,i7=0,i8=0,i9=0,i10=0,i11=0;
			for (int i = 0; i < n; i++)
			{
				if (stu[i].score < 60)
				{
					i6++;
				}
				else if (stu[i].score >= 60 && stu[i].score < 70)
				{
					i7++;
				}
				else if (stu[i].score >= 70 && stu[i].score < 80)
				{
					i8++;
				}
				else if (stu[i].score>=80&& stu[i].score<90)
                                {
					i9++;
				}
				else if(stu[i].score>=90&& stu[i].score<99)
				{
					i10++;
				}
				else if (stu[i].score == 100)
				{
					i11++;
				}
			}
			printf("<60\t%d\t%.2f%%\n", i6, (float)i6/ (float)n*100);
			printf("%d-%d\t%d\t%.2f%%\n",60,69, i7, (float)i7/ (float)n*100);
			printf("%d-%d\t%d\t%.2f%%\n",70,79, i8, (float)i8/ (float)n*100);
			printf("%d-%d\t%d\t%.2f%%\n",80,89, i9, (float)i9/ (float)n*100);
			printf("%d-%d\t%d\t%.2f%%\n",90,99,i10, (float)i10/ (float)n*100);
			printf("%d\t%d\t%.2f%%\n",100,i11,(float)i11/(float)n*100);
		}
		else if (k == 8)
		{
			int q11, w11, e11; float temp111; long temp211;
			for (q11 = 0; q11 < n - 1; q11++)
			{
				e11 = q11;
				for (w11 = q11 + 11; w11 < n; w11++)
				{
					if (stu[w11].ID > stu[e11].ID)
					{
						e11 = w11;
					}
				}
				if (e11 != q11)
				{
					temp111 = stu[e11].score; stu[e11].score = stu[q11].score; stu[q11].score = temp111;
					temp211 = stu[e11].ID; stu[e11].ID = stu[q11].ID; stu[q11].ID = temp211;
				}
			}
			for (int i = n - 1; i >= 0; i--)
			{
				printf("%ld\t%.0f\n", stu[i].ID, stu[i].score);
			}
		}
	} while (k != 0);
	return 0;

}
