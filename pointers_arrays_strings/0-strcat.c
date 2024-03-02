#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: string used
 * @src: string used
 * Return: dest(Success)
 */

char *_strcat(char *dest, char *src)

{
	int i = 0;
	int l = 0;

	while (dest[i++])
		l++;

	for (i = 0; src[i]; i++)
		dest[l++] = src[i];

	return (dest);
}
