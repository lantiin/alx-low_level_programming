#include "main.h"
/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	int row1, row2;

	for (row1 = 0; a[row1][7]; row1++)
	{
		for (row2 = 0; row2 < 8; row2++)
			_putchar(a[row1][row2]);
		_putchar('\n');
	}
}
