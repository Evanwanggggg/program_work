#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int a1=0, a2=0, a3=0, a4=0, a5=0, a6=0,a7=0,a8=0,a9=0,a10=0,a11=0,x,y;

	for (int i = 0; i < 36000; i++)
	{
		x = rand() % 6 + 1;
		y = rand() % 6 + 1;
		if (x + y == 2)
			a1+=1;
		else if (x + y == 3)
			a2 += 1;
		else if (x + y == 4)
			a3 += 1;
		else if (x + y == 5)
			a4 += 1;
		else if (x + y == 6)
			a5 += 1;
		else if (x + y == 7)
			a6 += 1;
		else if (x + y == 8)
			a7 += 1;
		else if (x + y == 9)
			a8 += 1;
		else if (x + y == 10)
			a9 += 1;
		else if (x + y == 11)
			a10 += 1;
		else if (x + y == 12)
			a11+= 1;
	}
	printf("\n\n2出現了%d次\n", a1);
	printf("3出現了%d次\n", a2);
	printf("4出現了%d次\n", a3);
	printf("5出現了%d次\n", a4);
	printf("6出現了%d次\n", a5);
	printf("7出現了%d次\n", a6);
	printf("8出現了%d次\n", a7);
	printf("9出現了%d次\n", a8);
	printf("10出現了%d次\n", a9);
	printf("11出現了%d次\n", a10);
	printf("12出現了%d次\n", a11);
	return 0;
}