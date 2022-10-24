#include "main.h"
/**
  *rev_string - reverse string
  *@s: string to be reversed
  */
void rev_string(char *s)
{
	int rev, a, verse;
	char tank;

	for (rev = 0; s[rev] != '\0'; rev++)
		;

	a = 0;
	verse = rev / 2;

	while (verse--)
	{
		tank = s[rev - a - 1];
		s[rev - a - 1] = s[a];
		s[a] = tank;
		a++;
	}
}
