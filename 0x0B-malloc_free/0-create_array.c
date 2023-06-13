/**
 *create_array- creates array of chars, initializes it with a specific char
 *@size: the size is the space required, in bytes
 *@c: paramter used to initalize
 *Return: a pointer to array, or NULL if malloc fails, or NULL if size = 0
 */
#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
unsigned int i;  

char *ptr;

if (size == 0)
return (0);

else
ptr = malloc(size);

if (ptr != NULL)
for (i = 0; i <= size; i++)
*(ptr + i) = c;

else
return (0);


return (ptr);
}

