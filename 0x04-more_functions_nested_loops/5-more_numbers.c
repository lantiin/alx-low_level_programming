#include "main.h"
/**
  *more_numbers - prints more numbers
  */
void more_numbers(void)
{
	char a, b;
	int c = 0;


	while (c < 10)
{
	for (b = 0; b <= 14; b++)
	{
		a = b;
		if (b > 9)
		{
			_putchar ('1');
			a = b % 10;
		}
	 _putchar('0' + a);
	}
	_putchar ('\n');
	c++;
}
}
