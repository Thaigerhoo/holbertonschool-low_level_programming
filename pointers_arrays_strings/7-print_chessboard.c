#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: where chessboard is kept
 */

void print_chessboard(char (*a)[8])
{
	int row, line;

	for (row = 0, a[row][7]; row++;)
	{
		for (line = 0; line < 8; line++)
			_putchar(a[row][line]);

		_putchar('\n');
	}
}
