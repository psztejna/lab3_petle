#include<stdio.h>


int main(void)
{
	int sideX, sideY;

	printf("Side X: ");
	scanf("%i", &sideX);
	printf("Side Y: ");
	scanf("%i", &sideY);

	int i = 0;
	for(; i < sideX; ++i)
		putchar('*');
	putchar('\n');
	i = 0;
	for(; i < (sideY - 2); ++i)
	{
		putchar('*');
		int j = 0;
		for(; j < (sideX - 2); ++j)
			putchar(' ');
		printf("*\n");
	}

	i = 0;
	for(; i < sideX; ++i)
		putchar('*');
printf("\n");
	return 0;

}
