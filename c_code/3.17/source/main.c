#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1;
	float num2, num3, num4, num5,sum=0;
	printf("Enter account number (-1 to end):");
	scanf("%d", &num1);
	printf("Enter beginning balance:");
	scanf("%f", &num2);
	printf("Enter total charges:");
	scanf("%f", &num3);
	printf("Enter total credits:");
	scanf("%f", &num4);
	printf("Enter credit limit:");
	scanf("%f", &num5);

	sum = num2 + num3 - num4;
	if (sum > num5)
	{
		printf("Account:     %d\n", num1);
		printf("Credit limit:%0.2f\n", num5);
		printf("Balance:     %0.2f\n", sum);
		printf("Credit Limit Exceeded.");
	}
}