#include "holberton.h"

/**
 * _strcmp - comp 2
 * @s1: string
 * @s2: string
 *
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s2[i] == '\0')
			return (s1[i]);
		if (s2[i] > s1[i])
			return (s1[i] - s2[i]);
		if (s2[i] < s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i] != '\0')
		return (0);
	return (0);
}
