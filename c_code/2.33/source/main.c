#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c, d, e,sum;
	printf("�Ш̧ǿ�J:");
	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
	a = a / c;
	a = a * b;
	sum = a + d + e;
	printf("�`��O:%f", sum);
}