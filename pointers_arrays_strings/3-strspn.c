#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: string used
 * @accept: bytes of reference
 * Return: nob (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int nob = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				nob++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (nob);
		}
		i++;
	}
	return (nob);
}
