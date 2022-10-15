#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all possible combination of 2-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int c, i, k, j;

	for (c = '0'; c <= '9'; c++)
{
	for (i = '0'; i <= '9'; i++)
{
	for (k = '0'; k <= '9'; k++)
{
	for (j = '0'; j <= '9'; j++)
	{
		if (((k + j) > (c + i) && k >= c) || c < k)
		{
			putchar(c);
			putchar(i);
			putchar(' ');
			putchar(k);
			putchar(j);
		if (c + i + k + j == 35 && c == '9')
		{
			break;
		}
			else
		{
			putchar(',');
			putchar(' ');
		}
		}
		}
	}
}
}
			putchar('\n');
			return (0);
}

