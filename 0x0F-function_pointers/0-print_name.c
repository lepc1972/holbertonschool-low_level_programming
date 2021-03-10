#include "function_pointers.h"
/**
 * print_name - function that prints the name
 * @name: This is a name to printf
 * @f: pointer that go to the function that prints the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		(*f)(name);
}
