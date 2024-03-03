#include "main.h"
/**
 * reverse_array - reverses the contents of an array
 * @a: array used
 * @n: number of elements in the array
 * Return: void (Success)
 */

void reverse_array(int *a, int n)

{
	int ind, temp;

	for (ind = n - 1; ind >= n / 2; ind--)
	{
		tmp = a[n - 1 - ind];
		a[n - 1 - ind] = a[ind];
		a[ind] = tmp;
	}
}
