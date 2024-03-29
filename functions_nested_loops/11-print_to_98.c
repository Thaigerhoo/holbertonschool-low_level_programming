#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers in order until the 98th number
 * @n: variable used to specify starting number
 * Return: 0 (Success)
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
		}

	}

	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n > 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
