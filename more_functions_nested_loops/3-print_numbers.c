#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 * Return: 0 (Success)
 */

void print_numbers(void)

{
	int m; 

	for (m = 0; m < 10; m++)
	{
		_putchar('0' + m);
	}

	_putchar('\n');
}
