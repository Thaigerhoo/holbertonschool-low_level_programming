#include "main.h"

/**
 * *_strncpy - copies strings
 * @dest: string used
 * @src: string used
 * @n: int used as value of string
 * Return: dest(Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
