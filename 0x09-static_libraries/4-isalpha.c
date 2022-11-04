#include "main.h"
/**
  * _isalpha(int c)-checks for alphabets
  *@c: is the char to be checked
  *Return: 1 if character is an alphabet, otherwise 0
  */

int _isalpha(int c)
{
	if (c <= 122 && c >= 65)
		return (1);
	else
		return (0);
}
