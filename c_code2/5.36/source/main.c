#include<stdio.h>
void tower(int, char, char, char);
int main()
{
	int n;
	printf("��J��L��:");
	scanf("%d", &n);
	tower(n, 'A', 'C', 'B');
}
void tower(int a, char b, char c, char d)
{
	if (a == 1)
	{
		printf("\n�N��L1�q%c�@��%c", b, c);
		return;
	}
	tower(a - 1, b, d, c);
	printf("\n�N��L%d�q%c�@��%c",a, b, c);
	tower(a-1,d,c,b);
}