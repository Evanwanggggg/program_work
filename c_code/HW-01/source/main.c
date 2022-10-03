#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	for (int i = 0; i < 9; i++)
	{
		printf("*");
	}
	printf("\n");
	for (int i = 0; i < 8; i++)
	{
		printf("*       *\n");
	}
	for (int i = 0; i < 9; i++)
	{
		printf("*");
	}
	printf("\n");

	printf("   ***   \n");
	printf(" *     * \n");
	for (int i = 0; i < 5; i++)
	{
		printf("*       *\n");
	}
	printf(" *     * \n");
	printf("   ***   \n");

	printf("    *    \n");
	printf("   ***   \n");
	printf("  *****  \n");
	for (int i = 0; i < 6; i++)
	{
		printf("    *    \n");
	}
	printf("\n");

	printf("    *    \n");
	printf("   * *   \n");
	printf("  *   *  \n");
	printf(" *     * \n");
	printf("*       *\n");
	printf(" *     * \n");
	printf("  *   *  \n");
	printf("   * *   \n");
	printf("    *    \n");
}