#include "holberton.h"
#include <stdio.h>
/**
 * main - print vals
 * @argc: count
 * @argv: array
 *
 * Return: always 0
 **/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);

}
return (0);

}
