#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1, num2;
	printf("�п�J:");
	scanf("%d %d", &num1, &num2);
	if (num1 % num2 == 0)
	{
		printf("�Ĥ@�ӼƬO�ĤG�Ӽƪ�����");
	}
	else
	{
		printf("�Ĥ@�ӼƤ��O�ĤG�Ӽƪ�����");
	}
}