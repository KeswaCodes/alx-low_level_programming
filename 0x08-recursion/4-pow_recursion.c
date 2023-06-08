/**
 *_pow_recursion- returns the value of x raised to the power y
 *@x: base as a parameter
 *@y: exponent as power
 *Return: value of x raised to power y
 */

int _pow_recursion(int x, int y)
{
int scale = 1;
if (y < 0)
return (-1);
if (y == 0 )
return (1);

scale *= x;
return (scale * (_pow_recursion(x, y - 1)));

}

