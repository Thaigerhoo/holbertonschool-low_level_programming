#include <stdio.h>
/**
 * main - print the lowercase alphabet backwards
 * Return: 0 (Sucecess)
  */
int main(void)
{
	char lowc;

	for (lowc = 'z'; lowc >= 'a'; lowc--)
		putchar(lowc);

	putchar('\n');
		return (0);
}
