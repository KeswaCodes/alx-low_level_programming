#include "main.h"

/**
 *_sqrt_recursion- returns the natural square root of a number
 *@n: natural number used
 *Return: square root
 */

int _sqrt_recursion(int n)
{
int square_rt = n * n;

if (n < 1)
{
return (-1);
}

return (square_rt);
}

