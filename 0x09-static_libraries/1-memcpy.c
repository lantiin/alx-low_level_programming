#include "main.h"
/**
 **_memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int b = n;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
