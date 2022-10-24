#include "main.h"
/**
  *_strlen - checks the lenght of string
  *@s: string to be checked
  *Return: lenght of string
  */
int _strlen(char *s)
{
	int length = 0;

	while (s[lenght])
		lenght++;
	return (lenght);
}
