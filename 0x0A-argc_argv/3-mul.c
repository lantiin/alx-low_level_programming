#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that takes first two integer arguments and prints the product
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if not enough arguments passed in, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = 1;

		for (b = 1; b < 3; b++)
			a *= atoi(argv[b]);
		printf("%d\n", a);
	}
	return (0);
}
