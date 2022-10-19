#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char star[] = "*";
	char stars[] = "*";
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%s", star);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 10; i >= 1; --i)
	{
		for (int j = 1; j <= i; ++j)
		{
			printf("%s",star);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <=10-i; k++)
		{
			printf("%s", star);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10 - i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("%s", star);
		}
		printf("\n");
	}
	printf("\n");
}