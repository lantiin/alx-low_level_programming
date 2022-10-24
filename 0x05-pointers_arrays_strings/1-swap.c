#include "main.h"
/**
  *swap_int - swaps values of two pointers
  *@a: first integer
  *@b: second integer
  */

void swap_int(int *a, int *b);
{
	*b += *a;
	*a = *b - *a;
	*b = *b - *a;
}
