#include "main.h"

/**
 * print_diagonal - prints diagonal line in the terminal
 * @n: number of lines printed
 * Result: prints a diagonal line if successful
 */

void print_diagonal(int n)

{
	int s, m;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (m = 0; s < n; m++)
	{
		for (s = 0; s < m; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
