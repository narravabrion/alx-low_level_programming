#include <stdio.h>
/**
 * main - sums of multiples of natural numbers < 1024
 * Return: 0 success
 */
int main(void)
{
	int i, multiple, sum;
	int total = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			multiple = i;
			sum = total + multiple;
			total = sum;
		}
	}
	printf("%d\n", total);
	return (0);
}
