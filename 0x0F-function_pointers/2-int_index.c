#include <stdlib.h>
#include "function_pointers.h"

/**
 *int_index- searches for an integer
 *@array: array of integers to be checked
 *@size: number of elements in the array
 *@cmp: function pointer that compares values
 *Return: index of number if ofunction doesn't returns 0
 *if no element matches returns -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{

int result = 0, i;

if (size <= 0)
return (-1);

for (i = 0; i <= size; i++)
{
result = cmp(*(array + i));
if (result != 0)
return (i);
}


return(-1);

}
