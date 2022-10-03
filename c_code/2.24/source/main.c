#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1;
	printf("½Ð¿é¤J:");
	scanf("%d", &num1);
	if (num1 % 2 == 0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}