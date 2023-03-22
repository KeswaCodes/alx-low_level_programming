#include <stdlib.h>
#include "function_pointers.h"

/**
 *array_iterator- executes function given as a paramter on each array element
 *@array: an array pointer to int as a paramter
 *@size: the size of the array
 *@action: function pointer to be used
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (!array || !action)
return;

for (i = 0; i < size; i++)
action(array[i]);
}
