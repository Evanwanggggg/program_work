#include <stdio.h> 
#include <stdlib.h> 
#define MAX 10
int binarySearch(int[], int);
int main()
{
	int i,find;
	int number[10] = { 3 ,24 ,57 ,57 ,67 ,68 ,83 ,90 ,92 ,95 };
	printf("��J�M���H�G");
	scanf("%d", &find);
	if ((i = binarySearch(number, find)) >= 0)
		printf("���Ʀr���%d�Ӧ�l ", i+1);
	else
		printf("\n�䤣��");
	printf("\n");

	return 0;
}
int binarySearch(int a[], int b)
{
	int l = 0;
	int m = MAX - 1;
	while (l <= m)
	{
		int mid = (l + m) / 2;
		if (a[mid] < b)
		{
			l = mid + 1;
		}
		else if (a[mid] > b)
		{
			m = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}