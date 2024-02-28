#include "main.h"
/**
 * print_line - prints a line in the terminal
 * @n: number of lines to be printed
 * Result: prints a straight line is successful
 */

void print_line(int n)

{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (m = 1; m <= n; m++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
