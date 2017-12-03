#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char stringReverse(int x);
char string[100];

int main(void)
{
	int s;
	printf("Enter a string : ");
	scanf("%s", &string);
	s = strlen(string);
	stringReverse(s);
	printf("\n");
	system("pause");
	return 0;
}

char stringReverse(int x)
{
	if (x == 1)
	{
		printf("%c", string[0]);
	}
	else
	{
		printf("%c", string[x-1]);
		stringReverse(x-1);
	}
}