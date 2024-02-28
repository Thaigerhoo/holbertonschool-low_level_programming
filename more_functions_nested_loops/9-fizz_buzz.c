#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */

int main(void)

{
	int f;

	for (f = 1; f <= 100; f++)
	{
		if (f % 3 == 0)
			printf("Fizz");
		if (f % 5 == 0)
			printf("Buzz");
		if (f % 3 != 0 && f % 5 != 0)
			printf("%d", f);
		if (f < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
