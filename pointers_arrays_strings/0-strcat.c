#include "main.h"

/**
 * *_strncpy - concatenates two strings
 * @dest: string used
 * @src: string used
 * @n: int used as value of string
 * Return: dest(Success)
 */

char *_strncpy(char *dest, char *src, int n)

{
	int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}
	dest = '\0';

	return (dest);
}
