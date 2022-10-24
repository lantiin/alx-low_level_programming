#include "main.h"
/**
  *puts_half - prints the second half of a string
  *@str: string to be printed
  */
void puts_half(char *str)
{
	int a;

	for (a = 0; str[1] != '\0'; a++)
		;
	a++;
	for (a /= 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
