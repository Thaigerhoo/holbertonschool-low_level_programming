#include <stdio.h>
/**
 * main - program that prints numbers from base 10 separated by commas
 * Return: 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	if (num < 9)
	{
		putchar(',');
	}
	}

	putchar('\n');

	return (0);
}
