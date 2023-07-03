/**
 *_puts_recursion- prints a new string, followed by a new line
 *@s: pointer to string
 *Return: void
 */

#include "main.h"

void _puts_recursion(char *s)
{

if (*s == '\0')
{
_putchar('\n');
return;
}

else
_putchar(*s);
_puts_recursion(s + 1);

}
