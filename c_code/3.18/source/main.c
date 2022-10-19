#include<stdio.h>
#include<stdlib.h>

int main()
{
	float num1,sum=0;
	printf("Enter sales in dollars (-1 to end):");
	scanf("%f", &num1);
	num1 = num1-(num1 * 0.91);
	sum = 200 + num1;
	printf("Salary is: %0.2f", sum);
}