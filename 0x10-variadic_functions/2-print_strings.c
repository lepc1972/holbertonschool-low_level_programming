#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - prints a given string followed by a new line
 *@separator: string to be printed between strings
 *@n: number of strings passed to the function
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
va_list ap;

unsigned int i;
char *se;

va_start(ap, n);

for (i = 0; i < n; i++)
{
se = va_arg(ap, char*);
if (se != NULL)
{
printf("%s", se);
}
else
{
printf("%p", se);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}


}
printf("\n");
va_end(ap);

}
