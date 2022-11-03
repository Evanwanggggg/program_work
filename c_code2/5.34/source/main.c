#include<stdio.h>
int power(int, int);
int main()
{
	int a, b;
	printf("½Ğ¿é¤J¼Æ¦r:");
	scanf("%d %d", &a, &b);
	printf("%d", power(a, b));
}
int power(int base, int exponent)
{
	int s=1;
	for (int i = exponent; i >= 1; i--)
	{
		s = s * base;
	}
	return s;
}