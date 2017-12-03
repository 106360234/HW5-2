#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int sum[11] = { 0 };
	int i = 0;
	int d1, d2, j;

	srand(time(NULL));

	do
	{
		i++;
		d1 = rand() % 6;
		d2 = rand() % 6;
		sum[d1 + d2]++;
	} while (i <= 36000);

	for (j = 0; j <= 10; j++)
	{
		printf("sum[%2d] = %5d%c", j + 2, sum[j], j % 2 == 1 ? '\n' : '\t');
	}
	
	printf("\n");
	system("pause");
	return 0;
}