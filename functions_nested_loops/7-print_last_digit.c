#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: int to get last digit from
 * Return: value of the last digit
*/

int print_last_digit(int num)
{
	if (num < 0)
		num *= -1;

	_putchar('0' + (num % 10));

	return (num % 10);
}
