#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - Print out the binary representation of an unsigned long int
 * @n: int to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int rev;
	unsigned long int i;

	rev = i = 0;
	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		rev = rev << 1;
		rev += n & 1;
		i++;
		n = n >> 1;
	}
	while (rev > 0)
	{
		_putchar((rev & 1) + '0');
		rev = rev >> 1;
		i--;
	}
	if (i > 0)
	{
		while (i != 0)
		{
			_putchar('0');
			i--;
		}
	}
}
