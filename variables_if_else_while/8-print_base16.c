#include <stdio.h>
/**
 * main - prints all numbers of base 16
 * Return: 0 (Success)
 */

int main(void)
{
	int num;
	char lowc;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + 0);

	for (lowc = 'a'; lowc <= 'f'; lowc++)
		putchar(lowc);

	putchar('\n');

	return (0);
}
