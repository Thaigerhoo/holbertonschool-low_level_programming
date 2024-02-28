#include "main.h"

/**
 * print_square - prints a square in the terminal using #
 * @size: is the size of the square
 * Result: Successful if a square is printed correctly in the terminal
 */

void print_square(int size)

{
	int s, l;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (s = 0; s < size; s++)
	{
		for (l = 0; l < size; l++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
