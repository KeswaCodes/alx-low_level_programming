#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all- returns the sum of all it's parameters
 *@n: last fixed parameter
 *Return: sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{

unsigned int result = 0, i;
va_list args;
if (n == 0)
return (0);
va_start(args, n);

for (i = 0; i < n; i++)
result += va_arg(args, unsigned int);

va_end(args);
return (result);
}
