#include "main.h"
/**
 * _strncpy - Copies a string.
 * @dest: The buffer storing the string copy.
 * @src: The string to be copied.
 * @n: The maximum number of bytes to copied from src.
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, src_len = 0;

	while (src[a++])
		src_len++;
	for (a = 0; src[a] && a < n; a++)
		dest[a] = src[a];
	for (a = src_len; a < n; a++)
		dest[a] = '\0';
	return (dest);
