#include "main.h"
/**
 * _memcpy - copies bytes from one memory area to another
 * @dest: destination where bytes will be copied to
 * @src: source of bytes that'll be copied
 * @n: size to be copied
 * Return: dest (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
