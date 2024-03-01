#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to be reversed
 * Result: string is printed in reverse
 */

void print_rev(char *s)

{
	int l;
	int a = 0;

	for (l = 0; s[l] != '\0'; l++)
	{
	}

	for (a = l - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}

	_putchar('\n');
}
