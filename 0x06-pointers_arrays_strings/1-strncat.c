#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest:a pointer to char
 *@src:a pointer to char
 *@n: number of bytes used
 *Return: pointer to resulting dest
 */

char *_strncat(char *dest, char *src, int n)

{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}

dest[i] = '\0';

return (dest);
}
