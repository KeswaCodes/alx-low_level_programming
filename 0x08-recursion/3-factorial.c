/**
 *factorial- returns the factorial of a given number
 *@n: number to calculate factorial
 *Return: The factorial of a number
 */

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);

return (n * factorial(n - 1));
}

