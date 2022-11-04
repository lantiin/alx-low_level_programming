#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int a, b, length, add;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		add = 0;
		for (a = 1; a < argc; a++)
		{
			ptr = argv[i];
			length = strlen(ptr);

			for (b = 0; b < length; b++)
			{
				if (isdigit(*(ptr + b)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[a]);
		}
		printf("%d\n", add);
	}
	return (0);
}
