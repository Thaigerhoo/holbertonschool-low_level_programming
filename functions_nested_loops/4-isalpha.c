#include "main.h"
/**
 * _isalpha - verifies alphabetical character
 * @c: character being verified
 * Return: 1 (True) 0 (False)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
