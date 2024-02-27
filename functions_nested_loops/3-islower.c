#include "main.h"
/**
 * _islower - identifies a lowercase
 * @c: letter being identified
 * Return: 1 (Success),  0 (false)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
