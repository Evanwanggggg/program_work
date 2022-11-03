#include<stdio.h>
#include<stdlib.h>

int main()
{
	char a;
	printf("請輸入一大寫字母:");
	scanf("%c", &a);
	a = a + 32;
	printf("%c", a);

}