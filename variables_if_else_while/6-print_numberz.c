#include <stdio.h>
/**
 * main - prints all numbers from base 10 in order 0 to 10
 * Return: 0 (Success)
 */

int main(void)
{
	int num:

	for (num = 0; num <= 10; num++)
		putchar ((num % 10) + '0');

	putchar('\n');

	return (0);
}
