#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, product;
	float hour,money,sum,gross, pmoney;
	printf("1:manager\n");
	printf("2:hourly worker\n");
	printf("3:commission worker\n");
	printf("4:pieceworker\n\n");
	printf("Enter the paycode:");
	scanf("%d", &num);
	switch (num)
	{
		case 1:
			printf("Average monthly salary of managers are 66,000\n");
			printf("so weekly salary is 16500\n");
			break;
		case 2:
			printf("Enter work hours:");
			scanf("%f", &hour);
			printf("Enter money:");
			scanf("%f", &money);
			if (hour > 40)
			{
				sum = 40 * money + (hour - 40)*money*1.5;
			}
			else
			{
				sum = hour*money;
			}
			printf("Salary is:%0.2f", sum);
			break;
		case 3:
			printf("Enter gross weekly sales:");
			scanf("%f", &gross);
			gross = (gross*0.057) + 250;
			printf("weekly salary:%0.2f", gross);
			break;
		case 4:
			printf("Enter how many product:");
			scanf("%d", &product);
			printf("Enter product money:");
			scanf("%f", &pmoney);
			pmoney = product * pmoney;
			printf("salary:%0.2f", pmoney);
			break;
	}
}