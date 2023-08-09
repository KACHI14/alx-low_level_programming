#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - make grid with nested loop
 * @width: the width input
 * @height: the height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int o, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (o = 0; o < height; o++)
	{
		mee[o] = malloc(sizeof(int) * width);

		if (mee[o] == NULL)
		{
			for (; o >= 0; o--)
				free(mee[o]);

			free(mee);
			return (NULL);
		}
	}

	for (o = 0; o < height; o++)
	{
		for (z = 0; z < width; z++)
			mee[o][z] = 0;
	}

	return (mee);
