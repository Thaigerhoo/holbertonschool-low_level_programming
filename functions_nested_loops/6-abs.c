#include "main.h"
/**
 * _abs - computes absolute value of an int
 * @i: integer used to get absolute value
 * Return: void
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	return (i);
}
