#ifndef _BITS_
#define _BITS_

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int set_bit(unsigned long int *n, unsigned int index);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);

# endif
