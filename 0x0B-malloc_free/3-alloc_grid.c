#include "main.h"
/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **twoDarray;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);
	twoDarray = malloc(sizeof(int *) * height);
	if (twoDarray == NULL)
		return (NULL);
	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		twoDarray[hgt_index] = malloc(sizeof(int) * width);
		if (twoDarray[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(twoDarray[hgt_index]);
			free(twoDarray);
			return (NULL);
		}
	}
	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			twoDarray[hgt_index][wid_index] = 0;
	}
	return (twoDarray);
}
