#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b;
	printf("number  square  cube\n");
	for (int i = 0; i < 11; i++)
	{
		a = i * i;
		b = i * i*i;
		printf("%d\t", i);
		printf("%d\t", a);
		printf("%d\n", b);
	}
}