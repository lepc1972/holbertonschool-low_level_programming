#include "holberton.h"
/**
 * print_numbers - print 0-9
 *
 * Return: Void
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
