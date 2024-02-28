#include "main.h"
/**
 * print_triangle - prints a triangle formed by #'s in the terminal
 * @size: number defining size of triangle
 */

void print_triangle(int size)

{
	int l, s, t;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (l = 1; l <= size; l++)
	{
		for (s = size - l; s > 0; s--)
		{
			_putchar(' ');
		}

		for (t = 1; t <= l; t++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
