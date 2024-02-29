#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char to be used as a string
 * Return: length of string
 */

int _strlen(char *s)

{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
