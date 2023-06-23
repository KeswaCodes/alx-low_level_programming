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

int value ;
unsigned int i;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
value = va_arg(args, unsigned int);
printf("%d", value);

if (i != n - 1)
{
if (separator)
printf("%s", separator);

}


}
printf("\n");
}
