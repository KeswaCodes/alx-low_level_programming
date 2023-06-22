#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator- executes a function given as a parameter of an array
 *@array: array passed as an argument
 *@size: size of array
 *@action: pointer to the function I need to use
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
while (i < size)
{
action(*(array + i));
i++;
}
}
