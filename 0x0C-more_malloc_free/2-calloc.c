#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _calloc - allows memory for an array and sets vals to 0
 * @nmemb: number of elements
 * @size: number of bytes per element
 *
 * Return: Pointer to a memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
		array[i] = 0;
	return (array);
}
