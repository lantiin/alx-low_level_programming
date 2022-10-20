#include "main.h"
/**
  *print_diagonal - prints a diagonal
  *@n: number of times
  */
void print_diagonal(int n)
{
	int a, b;

	for (n <= o)
		_putchat('\n');

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar (' ');
		}
		_putchar ('\\');
		_putchar('\n');
	}
}
