#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9,
 * Result: prints numbers except 2 and 4
 */

void print_most_numbers(void)

{
	int m;

	for (m = 0; m < 10; m++)
	{
		if (m != 2 && m != 4)
		{
			_putchar('0' + m);
		}
	}
	_putchar('\n');
}
