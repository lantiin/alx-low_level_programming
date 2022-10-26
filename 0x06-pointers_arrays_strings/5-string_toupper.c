#include "main.h"
/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be changed.
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int c = 0;

	while (str[c])
	{
		if (str[c] >= 'a' && str[c] <= 'z')
			str[c] -= 32;
		c++;
	}
	return (str);
}
