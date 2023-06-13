/**
 *_strdup- returns pointer to new string which is a duplicate str
 *@str: string to be copied
 *Return: NULL (fail), pointer to duplicated string (success)
 */

#include "main.h"
#include <stdlib.h>
char *_strdup(char *str)
{
char *ptr;
int length = 0;
int i;
if (str == NULL)
return (NULL);

while (str[length] != '\0')
length++;

ptr = malloc(sizeof(*ptr) * (length + 1));

if (ptr == NULL)
return (NULL);

else
for (i = 0; i < length; i++)
*(ptr + i) = *(str + i);

return (ptr);



}
