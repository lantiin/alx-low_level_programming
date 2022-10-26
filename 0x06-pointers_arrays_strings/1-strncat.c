#include "main.h"
/**
 * _strncat - Concatenates two strings using at most
 *            an inputted number of bytes from src.
 * @dest: The string to be added to.
 * @src: The string to be added to dest.
 * @n: The number of bytes from src to be added to dest.
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;

	int dest_len = 0;

	while (dest[a++])
		dest_len++;
	for (a = 0; src[a] && a < n; a++)
		dest[dest_len++] = src[a];
	return (dest);
}
