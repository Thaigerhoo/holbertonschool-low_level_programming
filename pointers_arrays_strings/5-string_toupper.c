#include "main.h"
/**
 * string_toupper - changes lowercase letters to uppercse in a string
 * @str: string used
 * Return: str (Success)
 */

char *string_toupper(char *str)

{
	int ind = 0;

	while (str[ind])
	{
		if (str[ind] >= 'a' && str[ind] <= 'z')
			str[ind] -= 32;

		ind++;
	}

	return (str);
}
