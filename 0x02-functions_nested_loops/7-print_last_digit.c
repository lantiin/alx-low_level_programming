#include "main.h"
/**
 *print_last_digit - prints last digit of an integer
 *@n: interger in question
 *Return: value of the last digit
 */
int print_last_digit(int n)
{
	int x = n % 10;

		if (n < 0)
		{
			x = x * -1;
		}
		_putchar (x);
		return (X);
}

