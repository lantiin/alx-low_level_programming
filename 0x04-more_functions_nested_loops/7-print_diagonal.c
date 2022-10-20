#include "main.h"
/**
  *print_diagonal - prints a diagonal
  *@n: number of times
  */
void print_diagonal(int n)
{
	int a = 0;
	int b;

	while (a < n && n > 0)
	{
		b = 0;
		while (b < a)
		{
		_putchar(' ');
		b++;
		}

		_putchar ('\\');
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}
