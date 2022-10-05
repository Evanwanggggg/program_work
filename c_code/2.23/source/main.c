#include <stdio.h>
#include<stdlib.h>
int main()
{
	int num1, num2, num3, a, b;
	printf("叫块计:");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	a = num1;
	b = num1;
	if (num2 > num1)
	{
		if (num3 > num2)
		{
			a = num3;
		}
		else
		{
			a = num2;
		}
	}
	else
	{
		if (num1 > num3)
		{
		}
		else
		{
			a = num3;
		}
	}

	if (num2 < num1)
	{
		if (num3 < num2)
		{
			b = num3;
		}
		else
		{
			b = num2;
		}
	}
	else
	{
		if (num1 < num3)
		{
		}
		else
		{
			b = num3;
		}
	}
	printf("程计:%d\n", a);
	printf("程计:%d", b);
}