#include<stdio.h>
#include<stdlib.h>

int main()
{
	for (;;)
	{
		int hours;
		float rate,sum;
		printf("Enter # of hours worked (-1 to end):");
		scanf("%d", &hours);
		if (hours == -1)
		{
			break;
		}
		printf("Enter hourly rate of the worker ($00.00):");
		scanf("%f", &rate);
		if (hours < 40)
		{
			sum = hours * rate;
		}
		else
		{
			sum = (rate * hours) + ((rate / 2)*(hours - 40));
		}
		printf("Salary is:%0.2f\n\n", sum);
	}
}