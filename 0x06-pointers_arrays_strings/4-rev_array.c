#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int c, b;

	for (c = n - 1; c >= n / 2; c--)
	{
		b = a[n - 1 - c];
		a[n - 1 - c] = a[c];
		a[c] = b;
	}
}
