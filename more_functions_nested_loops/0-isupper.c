#include "main.h"
/**
 * _isupper - finds out if the letter is uppercase
 * @c: letter to be indentified
 * Return: 1 (Success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
