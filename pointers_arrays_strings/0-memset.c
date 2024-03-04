#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: variable used
 * @n: number of byes
 * Return: *s (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
