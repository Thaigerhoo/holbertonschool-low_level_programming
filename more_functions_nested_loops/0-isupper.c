#include "main.h"

/**
 * _isupper - finds out if the letter is uppercase
 * @c: letter to be indentified
 * Return: 1 (Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
