#include<stdio.h>
#include<stdlib.h>

int main()
{
	for(int i=1;i<501;i++)
		for(int j=1;j<501;j++)
			for (int k = 1; k < 501; k++)
			{
				if (i*i + j * j == k * k)
				{
					if (i < j)
					{
						printf("%d %d %d\n",i,j,k);
					}
					
				}
			}
}