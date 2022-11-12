#include<stdlib.h>
#include<stdio.h>
int main()
{
	int i, j, d, tmp;
	int a[5] = { 26,5,81, 7,63 };
	int b[5] = { 26,5,81, 7,63 };
	d = 4;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < d; j++)
		{
			if (b[j] > b[j + 1])
			{
				tmp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = tmp;
			}
		}

		if (a[0] == b[0] && a[1] == b[1] && a[2] == b[2] && a[3] == b[3] && a[4] == b[4])
		{
			system("pause");
			return 0;
		}
		else
		{
			printf("Loop %d :", i);
			for (j = 0; j < 5; j++)
				printf("%4d", b[j]);
			d--;
			for (int k = 0; k < 5; k++ )
				a[k] = b[k];
			printf("\n");
		}
	}
	system("pause");
}