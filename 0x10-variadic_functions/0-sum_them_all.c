#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *sum_them_all - sum all the parameters in function
 *@n: number of arguments
 *Return: sum, if n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
return (0);
}

va_list ap;

va_start(ap, n);

int unsigned i, sum = 0;

for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);
}

va_end(ap);
return (sum);





}
