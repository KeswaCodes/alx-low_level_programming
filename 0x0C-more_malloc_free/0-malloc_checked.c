/**
 *malloc_checked- allocates memory using malloc
 *@b: size in bytes to be allocated
 *Return: pointer to allocated memory (successful), exit status 98(failure)
 */

#include <stdlib.h>
#include "main.h"
void *malloc_checked(unsigned int b)
{

void *ptr = malloc(b);

if (ptr == NULL)
exit(98);
 

return (ptr);

}
