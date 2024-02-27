#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @k: int to get last digit from
 * Return: value of the last digit
*/

int print_last_digit(int k)
{
	int g;

	if (k < 0)
		k = -k;
	g = k % 10;
	if (g < 0)
		g = -g;
	_putchar(g + '0');
	return (g);
}
