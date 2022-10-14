#include <stdio.h>
/**
  *main - Entry point
  *Return: Always 0
  */
int main(void)
{
	char n, m;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	for (m = 'A'; m <= 'Z'; m++)
		putchar(n);

	putchar('\n');
	return (0);
}
