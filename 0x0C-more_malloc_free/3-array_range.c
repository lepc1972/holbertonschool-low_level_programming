#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * array_range - creates an array
 * @min: start
 * @max: finish
 *
 * Return: array with range
 */

int *array_range(int min, int max)
{
	int *range, length, i, pos = 0;

	if (min > max)
		return (NULL);
	length = (max - min) + 1;
	range = malloc(length * sizeof(int));
	if (range == NULL)
	{
		free(range);
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		range[pos] = i;
		pos++;
	}
	return (range);
}
