#include "main.h"

/**
 *is_prime_number- determines hwether n is a prime number
 *@n: prime number to be used
 *Return: 1 if n is a prime number, else returns 0
 */

int is_prime_number(int n)
{
if (n % n != 0 && (n / 1) == n)
return (1);

else
return (0);
}


