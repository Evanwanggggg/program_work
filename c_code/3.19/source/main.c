#include<stdio.h>
#include<stdlib.h>

int main()
{
	for(;;)
	{
		float principal, rates, days,sum;
		printf("Enter loan principal (-1 to end):");
		scanf("%f", &principal);
		if (principal == -1)
		{
			break;
		}
		printf("Enter interest rate:");
		scanf("%f", &rates);
		printf("Enter term of the loan in days:");
		scanf("%f", &days);

		sum = (principal*rates)*days / 365;
		printf("The interest charge is:%0.2f\n\n", sum);

	}
}