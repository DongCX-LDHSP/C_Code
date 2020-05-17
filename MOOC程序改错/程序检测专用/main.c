#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void greedy(int a[], int len);

int main()
{
	int a[100], len = 10;
	for(int i = 0; i < 10; i++)
	{
		a[i] = rand() % 10;
	}
	greedy(a, 10);
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}

void greedy(int a[], int len)
{
	for(int i = 0; i < len; i++)
	{
		for(int j = i + 1; j < len; j++)
		{
			if (a[i] < a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				break;
			}
		}
	}
}
