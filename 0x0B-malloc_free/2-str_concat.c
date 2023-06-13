/**
 *str_concat- concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: pointer to concatenated strings(success), NULL (fail)
 */

#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
char *ptr;
int len_1 = 0;
int len_2 = 0;
int concat_len = len_1 + len_2 + 1;
int i;
while (s1[len_1] != '\0')
len_1++;

while (s2[len_2] != '\0')
len_2++;
ptr = malloc(sizeof(*ptr) * concat_len);
if ptr == NULL)
return (NULL);

if (s1 == NULL)
s1 = "NULL";
else
for (i = 0; i < len_1; i++)
ptr[i] = s1[i];
if (s2 == NULL)
s2 = "NULL";
else

for (i = 0; i < (len_2 + 1); i++)
ptr[len_1 + i] = s2[i];

ptr[concat_len] = '\0';


return (ptr);
}
