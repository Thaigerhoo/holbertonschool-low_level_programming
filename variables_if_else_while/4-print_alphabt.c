#include <stdio.h>
/**
 * main - prints alphabet ecxept q and e
 * Return: 0 (Sucess)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
