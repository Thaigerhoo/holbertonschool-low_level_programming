#include <stdio.h>
/**
 * main - prints the sum of of all multiples of 3 and 5 under 1024
 * Return: 0 (Success)
 */

int main(void)
{
	int i, sum;

	sum = 0;

	for (i = 0; i <= 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
