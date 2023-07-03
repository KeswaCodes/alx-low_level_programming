#include "main.h"
/**
 *malloc_checked- allocates memory using malloc
 *@b: size in bytes to be allocated
 *Return: pointer to allocated memory (successful), exit status 98(failure)
 */

void *malloc_checked(unsigned int b)
{
void *ptr;

if (b < 2147483647)
ptr = malloc(b);

else
exit(98);

if (ptr == NULL)
exit(98);

return (ptr);

}
