#include<stdio.h>
#include<stdlib.h>

int main()
{
	for (int i = 1; i <= 5; i++) 
	{
		for (int j = 1; j <= (5 - i); j++) {
			printf(" ");
		}
		for (int j = 1; j <= (2 * i - 1); j++) {
			printf("*");
		}
		printf("\n");

	}

	for (int i = 1; i <= 4; i++) 
	{
		for (int j = 1; j <= (1 + i - 1); j++) {
			printf(" ");
		}
		for (int j = 1; j <= (9 - 2 * i); j++) {
			printf("*");
		}
		printf("\n");
	}
}