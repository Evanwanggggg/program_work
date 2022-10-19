#include<stdio.h>
#include<stdlib.h>

int main()
{
	float rate, invest;
	rate = 1.1;
	invest = 5000;
	for (int i = 1; i <= 15; i++)
	{
		if (i == 1 || i == 2 || i == 3)
		{
			invest = invest * rate;
			printf("%d year:%0.0f\n", i, invest);
		}
		if (i == 4 || i == 5 || i == 6)
		{
			invest = invest * (rate+0.005);
			printf("%d year:%0.0f\n", i, invest);
		}
		if (i == 7 || i == 8 || i == 9)
		{
			invest = invest * (rate + 0.01);
			printf("%d year:%0.0f\n", i, invest);
		}
		if (i == 10 || i == 11 || i == 12)
		{
			invest = invest * (rate + 0.015);
			printf("%d year:%0.0f\n", i, invest);
		}
		if (i == 13 || i == 14 || i == 15)
		{
			invest = invest * (rate + 0.02);
			printf("%d year:%0.0f\n", i, invest);
		}
	}
}