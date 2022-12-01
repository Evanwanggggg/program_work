#include<stdio.h>
#include<stdlib.h>
void recursivemaximum(int a[]);
int main()
{
	int b;
	int a[20] = {0};
	for (int i = 0; i < 20; i++)
	{
		scanf("%d", &b);
		if (b == 0)
		{
			break;
		}
		a[i] = b;
	}
	recursivemaximum(a);
}
void recursivemaximum(int a[])
{
	int b = 0,c;
	for (int i = 0; i < 20; i++)
	{
		if (a[i] > b)
		{
			b = a[i];
		}
	}
	printf("³Ì¤j­È:%d", b);
}
