#include "holberton.h"
/**
 * _strcat - concatenate 2 str.
 * @dest: string to destiny
 * @src: string to source
 * Return: Return a concatenate str
 */

char *_strcat(char *dest, char *src)
{
	int str_length = 0, i = 0;

	while (dest[i++])
		str_length++;
	for (i = 0; src[i]; i++)
		dest[str_length + i] = src[i];
	dest[str_length + i] = '\0';
	return (dest);
}
