#include<stdio.h>
void tower(int, char, char, char);
int main()
{
	int n;
	printf("輸入圓盤數:");
	scanf("%d", &n);
	tower(n, 'A', 'C', 'B');
}
void tower(int a, char b, char c, char d)
{
	if (a == 1)
	{
		printf("\n將圓盤1從%c一到%c", b, c);
		return;
	}
	tower(a - 1, b, d, c);
	printf("\n將圓盤%d從%c一到%c",a, b, c);
	tower(a-1,d,c,b);
}