#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers- prints numbers
 *@separator: string to be printed between numbers
 *@n: last fixed parameter
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

int i;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%u", n);

if (i != n - 1)
{
if (separator)
printf("%s", separator);

else
;
}

printf("\n");
}
