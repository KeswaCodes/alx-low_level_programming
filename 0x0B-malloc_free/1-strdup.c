#include <stdlib.h>
#include "main.h"

/**
 *_strdup- allocates new space to pointer carrying a copy of *str parameter
 *@str: a pointer to char
 *Return: pointer to newly allocated space
 */
char *_strdup(char *str)
{
char *ptr;
int i;
int length = 0;

for (i = 0; i <= '\0'; i++)
{
length++;
}

ptr = malloc(sizeof(char) * length);
if (str == NULL)
{
return (NULL);
}
if (ptr == NULL)
{
return (NULL);
}

strcpy(ptr, str);

return (ptr);

}
