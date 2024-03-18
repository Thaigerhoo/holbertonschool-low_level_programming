#include "main.h"
#define NULL 0
/**
 * _strstr - finds substring
 * @haystack: string used
 * @needle: substring to be found
 * Return: NULL if substring not located
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (*haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				return (haystack);

				i++;
			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
