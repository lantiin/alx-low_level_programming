#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 */
void print_line(char *c, int s, int l)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		if (a <= s)
			printf("%02x", c[l * 10 + a]);
		else
			printf("  ");
		if (a % 2)
			putchar(' ');
	}
	for (b = 0; b <= s; b++)
	{
		if (c[l * 10 + b] > 31 && c[l * 10 + b] < 127)
			putchar(c[l * 10 + b]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int a;

	for (a = 0; a <= (size - 1) / 10 && size; a++)
	{
		printf("%08x: ", a * 10);
		if (a < size / 10)
		{
			print_line(b, 9, a);
		}
		else
		{
			print_line(b, size % 10 - 1, a);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
