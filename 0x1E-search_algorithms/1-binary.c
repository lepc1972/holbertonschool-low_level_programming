#include "search_algos.h"

/**
  * print_array - array between l n r
  * @array: numbers
  * @l: left
  * @r: right
  * Return: nothing
  */
void print_array(int *array, size_t l, size_t r)
{
	printf("Searching in array: ");
	for (l = l; l < r; l++)
		printf("%d, ", array[l]);
	printf("%d\n", array[l]);
}


/**
  * binary_search - search the value in the set
  * @array: numbers
  * @size: array size
  * @value: value to be searched
  * Return: return index if succesful or -1 if fail
  */
int binary_search(int *array, size_t size, int value)
{
	size_t head = 0, tail = size - 1, middle = 0;

	if (array == NULL)
		return (-1);
	while (head <= tail)
	{
		print_array(array, head, tail);
		middle = (head + tail) / 2;
		if (array[middle] < value)
			head = middle + 1;
		else if (array[middle] > value)
			tail = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
