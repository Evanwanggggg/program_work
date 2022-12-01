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
	printf("\n\n2¥X²{¤F%d¦¸\n", a1);
	printf("3¥X²{¤F%d¦¸\n", a2);
	printf("4¥X²{¤F%d¦¸\n", a3);
	printf("5¥X²{¤F%d¦¸\n", a4);
	printf("6¥X²{¤F%d¦¸\n", a5);
	printf("7¥X²{¤F%d¦¸\n", a6);
	printf("8¥X²{¤F%d¦¸\n", a7);
	printf("9¥X²{¤F%d¦¸\n", a8);
	printf("10¥X²{¤F%d¦¸\n", a9);
	printf("11¥X²{¤F%d¦¸\n", a10);
	printf("12¥X²{¤F%d¦¸\n", a11);
	return 0;
}