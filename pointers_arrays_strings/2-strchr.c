#include "main.h"
#define NULL 0
/**
 * _strchr - returns a pointer to the first occurance of c in the string
 * @s: pointer used
 * @c: params to find
 * Return: pointer to a character in the string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)

		return (&s[i]);

	else
		return (NULL);

}
