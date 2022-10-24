#include "main.h"
#include <stdio.h>
/**
  *print_array - prints n elements of an array
  *@a: pointer
  *@n: number of elements of the array to be printed
  */
void print_array(int *a, int n)
{
	int b;

	b = 0;

	for (n--; n >= 0; n--, a++)
	{
		printf("%d", a[b]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}

