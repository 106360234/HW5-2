#include<stdio.h>
#include<stdlib.h>

int recursiveMaximum(int num);
int number[10];
int max = 0;

int main(void)
{
	int num,i;
	printf("How many numbers do you enter?(number <= 10) ");
	scanf("%d", &num);
	for (i = 0; i <= num - 1; i++)
	{
		printf("number %d is : ", i + 1);
		scanf("%d", &number[i]);
	}
	if (num == 1)
	{
		printf("max = %d", number[0]);
	}
	else
	{
		recursiveMaximum(num);
		printf("max = %d", max);
	}
	printf("\n");
	system("pause");
	return 0;
}

int recursiveMaximum(int num)
{
	if (num == 1)
	{
		if (number[num] > max)
			max = number[num];
	}
	else
	{
		if(number[num] > max)
			max = number[num];
		recursiveMaximum(num - 1);
	}
}