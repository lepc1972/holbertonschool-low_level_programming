#include "holberton.h"

/**
 * print_diagonal - a nice diagonal
 * @n: length of line
 * Return: 0
 **/

void print_diagonal(int n)
{
	int x, y;

	for (y = 1; y <= n; y++)
	{
		for (x = 1; x < y; x++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
