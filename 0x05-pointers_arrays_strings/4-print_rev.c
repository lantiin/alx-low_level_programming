#include "main.h"
/**
  *print_rev - prints strings in reverse
  *@s: string to be reverse
  */
void print_rev(char *s)
{
	int a = 0;

	while (s[a])
		a++;

	while (a--)
		_putchar(s[a]);
	_putchar('\n');
}
