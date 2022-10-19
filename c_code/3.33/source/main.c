#include<stdio.h>
#include<stdlib.h>

int main()
{
	int length, breadth;
	printf("Enter length:");
	scanf("%d", &length);
	printf("Enter breadth:");
	scanf("%d", &breadth);
	for (int i = 1; i <= length; i++)
	{
		printf("*");
		for (int j = 1; j <=breadth; j++)
		{
			if (i == 1 || i == length || j==breadth)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}