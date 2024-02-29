#include "main.h"
/**
 * _puts - prints a string
 * @str: string used
 */

void _puts(char *str)

{
	int o;

	for (o = 0; str[o] != 0; o++)
	{
		_putchar(str[o]);
	}

	_putchar('\n');
}
