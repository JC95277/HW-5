#include<stdio.h>
#include<stdlib.h>
#define SIZE 11
int recursiveMinimum(int a[]);
int s[99], i, t2;

int main(void)
{
	printf("請輸入5個數字\n");
	while (i < 5)
	{
		i++;
		scanf("%d", &s[i]);
	}

	printf("最大值為%d\n", recursiveMinimum(s));
	system("pause");
	return 0;
}
int recursiveMinimum(int a[])
{
	int reg;
	if (i != 0)
	{
		if (a[1] < a[i])
		{
			reg = a[1];
			a[1] = a[i];
			a[i] = reg;
		}
		i--;
		recursiveMinimum(a);
	}
	else
		return a[1];
}