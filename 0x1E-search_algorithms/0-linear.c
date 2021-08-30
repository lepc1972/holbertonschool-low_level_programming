#include "search_algos.h"
/**
  * linear_search - search for values in an array
  * @array: pointer array first element
  * @size: array number of elements
  * @value: value returned
  * Return: on success index, or -1 if fail
  */
int linear_search(int *array, size_t size, int value)
{   int war;
	unsigned int x;

war = 0;

	if (array == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%u] = [%d]\n", x, array[x]);
		if (array[x] == value)
		{
			war = 1;
			return (x);
		}
	}
	if (war != 1)
		return (-1);
	return (x);
}
