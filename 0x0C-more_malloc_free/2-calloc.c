#include "main.h"
/**
 *_calloc- allocates memory for an array using malloc
 *@nmemb: number of members in array
 *@size: size of array
 *Return: ptr to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

for (i = 0; i < (size * nmemb); i++)
ptr[i] = 0;

return (ptr);

}
