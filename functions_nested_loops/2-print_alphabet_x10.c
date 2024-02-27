#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	char l;
	int a;

	a = 0;

	while (a < 10)
	{
		l = 'a'
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		a++;
	}
}
