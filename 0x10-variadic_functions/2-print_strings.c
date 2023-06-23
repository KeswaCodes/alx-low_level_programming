#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings- prints strings, followed by a new line
 *@separator: string to be printed between strings
 *@n: number of strings assed into function
 *Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

char *string;
unsigned int i;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
string = va_arg(args, char *);
printf("%s", string);


if (i != n - 1)
printf("%s", separator);
}
printf("\n");
}
