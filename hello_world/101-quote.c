#include <stdio.h>
#include <unistd.h>
/**
 * main - prints a line without using printf or puts
 * Return: 1 (Success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
		return (1);
}
