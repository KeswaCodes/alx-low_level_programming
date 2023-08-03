#include "main.h"
/**
 *clear_bit- sets the value of a bit to 0 at a specified index
 *@n: the decimal whose value has to be checked
 *@index: index at which you'd like to set the bit to 1
 *Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

if (n == NULL)
return (-1);

if (index >= sizeof(unsigned long int) * 8)
return (-1);

mask = 1UL << index;
*n &= ~mask;

return (1);

}
