#include "holberton.h"
/**
 * _isupper - Checked if a character is a upper character
 * @c: Value in ascii to be cheke
 * Return: (1) if c is upper (0) otherwise
 */

int _isupper(int c)
{

	int i;

	i = 65;

	for (i = 0; i <= 90; i++)
		{
		if (c >= 65 && c <= 90)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}


}

