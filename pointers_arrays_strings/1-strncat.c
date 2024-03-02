#include "main.h"

/**
 * _strncat - concatonates two strings using n bytes
 * @dest: destination of string to be appended
 * @src: string to be added to dest
 * @n: bytes used as a measurement
 * Return: dest (Success)
 */

char *_strncat(char *dest, char *src, int n)

{
	int i = 0;
	int l = 0;

	while (dest[i++])
		l++;

	for (i = 0; src[i] && i < n; i++)
		dest[l++] = src[i];

	return (dest);

}
