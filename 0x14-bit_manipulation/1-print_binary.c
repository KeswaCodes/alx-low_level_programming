#include "main.h"
/**
 *print_binary- prints the binary representation of a number
 *@n: decima to be converted
 *Return: void
 */

void print_binary(unsigned long int n)
{
int remainder = n & 1;

if (n < 1)
{
_putchar('0');
return;
}

if (n > 1)
print_binary(n >> 1);


_putchar((remainder) + '0');
}
