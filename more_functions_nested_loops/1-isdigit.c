#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: used to verify if it is a digit
 * Return: 1 (Success)
 */
int _isdigit(int c)
{
	if (c <= 9)
		return (1);
	else
		return (0);
}
