#include "main.h"

/**
 *_pow_recursion- returns the vale of x to the power y
 *@x: a parameter
 *@y: a parameter
 *Return: the exponentation value
 */

int _pow_recursion(int x, int y)
{
if (y < 0) /*Base condition*/
{
return (-1);
}

else if (y != 0)
return (x * _pow_recursion(x, y - 1)); /* Recursive call*/

else
return (1);
}
