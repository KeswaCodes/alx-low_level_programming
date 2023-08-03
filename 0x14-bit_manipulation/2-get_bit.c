#include "main.h"
/**
 *get_bit- returns the value of a bit at an index
 *@n: decimal number
 *@index: index at which we want to extract the bit
 *Return: value of the bit at index 'index' or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;
int bit;

if (n < 1)
return (-1);


if (n == 0)
return (-1);

mask = 1 << index;

bit = (mask & n) >> index;

return (bit);

}
