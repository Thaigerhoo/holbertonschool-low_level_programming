#include "main.h"
#define NULL 0
/**
 * _strpbrk - locates the first occurance in a string and another one
 * @s: pointer used
 * @accept: pointer to a char
 * Return: NULL (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		i++;
	}
	return (NULL);
}
