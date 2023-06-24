#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_all- prints anything
 *@format: a list of the types of arguments passed into the function
 *Return: void
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *string;
va_list args;

va_start(args, format);
while (format[i] != '\0')
{

switch (format[i])
{
case 'c':
printf("%c, ", va_arg(args, int));
break;

case 'i':
printf("%d, ", va_arg(args, int));
break;

case 'f':
printf("%f, ", va_arg(args, double));
break;

case 's':
string = va_arg(args, char *);
if (string == NULL)
string = "(nil)";
printf("%s", string);

default:
break;
}

i++;

}
printf("\n");
}
