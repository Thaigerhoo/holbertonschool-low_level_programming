#include "main.h"

/**
 * more_numbers - prints line of numbers 10 times
 * Result: Success
 */

void more_numbers(void)

{
	int l, m;

	for (l = 0; l < 10; l++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m >= 10)
			{
				_putchar(m / 10 + '0');
			}
		}
		_putchar(m % 10 + '0');
	}
	_putchar('\n');
}
