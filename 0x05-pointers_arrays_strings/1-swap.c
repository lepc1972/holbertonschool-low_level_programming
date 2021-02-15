/**
* swap_int - swaps the values of two integers
* @a: value one to swap
* @b: value two to swap
* Return: Nothing
*/
#include <stdio.h>
#include "holberton.h"

void swap_int(int *a, int *b)
{
int aux;

aux = *a;
*a = *b;
*b = aux;

}
