#include "main.h"
/**
 * leet - Encodes a string
 * @s: string being encoded
 * Return: s (Success)
 */

char *leet(char *s)

{
	int i = 0, c = 0, l = 5;
	char m[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		c = 0;

		while (c < l)
		{
			if (s[i] == m[c] || s[i] - 32 == m[c])
			{
				s[i] = n[c];
			}

			c++;

		}

		i++;
	}

	return (s);
}
