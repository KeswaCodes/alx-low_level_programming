#include "main.h"

/**
 *sqrt_check- checks for the square root
 *@x: number to be checked
 *@n: Value of square root
 *Return: square root
 */
int sqrt_check(int n, int x)
{
int square = x * x;

if (square == n)
return (x);

if (square > n)
return (-1);

return (sqrt_check(n, x + 1));
 
}

/**
 *_sqrt_recursion- returns the natural square root of a number
 *@n: number
 *Return: square root of n
 */

int _sqrt_recursion(int n)
{

if (n == 0)
return (0);


return sqrt_check(n, 1);

}



