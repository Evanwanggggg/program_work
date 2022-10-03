#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c, d, e,sum;
	printf("請依序輸入:");
	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
	a = a / c;
	a = a * b;
	sum = a + d + e;
	printf("總花費:%f", sum);
}