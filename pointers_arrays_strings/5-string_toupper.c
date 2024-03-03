#include "main.h"
/**
 * string_toupper - changes lowercase letters to uppercse in a string
 * @s: string used
 * Return: s (Success)
 */

char *string_toupper(char *s)

{
	int ind;

	while (s[ind])
	{
		if (s[ind] >= 'a' && s[ind] <= 'z')
			s[ind] -= 32;

		ind++;
	}

	return (s);
}
