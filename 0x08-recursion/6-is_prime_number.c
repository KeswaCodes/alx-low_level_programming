/**
 *is_prime_number- checks whether a number is prime or not
 *@n: number to be checked
 *Return: 1 if n is prime, otherwise returns 0
 */

int is_prime_number(int n)
{
if (n < 0)
return (0);
if (n >= 2)
{
if (n == 2)
return (1);
else if (n % 2 == 0)
return (0);
}
}
