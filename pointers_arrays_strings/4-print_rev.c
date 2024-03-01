#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be reversed
 */

void print_rev(char *s)

{
	int l;
	int a;

	for (l = 0; s[l] != '\0'; l++)
	{
	}

	for (a = l - 1; a >= 0; a--)
	{
		_putchar(s[l]);
	}

	_putchar('\n');
}
