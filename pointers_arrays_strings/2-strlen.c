#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char to be used as a string
 * Return: length of string
 */

int _strlen(char *s)

{
	int l;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	return (l);
}
