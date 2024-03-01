#include "main.h"

/**
 * rev_string - function that reverses a string when called
 * @s: string to be reversed
 */

void rev_string(char *s)

{
	int l = 0;
	int b = 0;
	int e;

	while (s[l] != '\0')
	{
		l++;
	}

	e = l - 1;

	while (b < e)
	{
		char lim = s[b];

		s[b] = s[e];

		s[e] = lim;
		s++;
		e--;
	}
}
