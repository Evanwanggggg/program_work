#include<stdio.h>

int main()
{
	int a, b,c=1,i=2;
	printf("�п�J��Ʀr:");
	scanf("%d %d", &a, &b);
	if (a == 1 || b == 1)
	{
		printf("%d", a*b);
	}
	else
	{
		while (a >= i && b >= i)
		{
			while (a%i == 0 && b%i== 0)
			{
				c = c * i;
				a = a / i;
				b = b / i;
			}
			i++;
		}
		printf("%d", a*b*c);
	}
}