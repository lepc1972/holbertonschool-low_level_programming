#include "holberton.h"
/**
 * _isdigit - Check if is a digit
 * @c: Value in ascii to be cheke
 * Return: (1) if c is a digit (0) otherwise
 */

int _isdigit(int c)
{
	int i;

	i = 48;

	for (i = 0; i <= 57; i++)
	{
		if (c >= 48 && c <= 57)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
