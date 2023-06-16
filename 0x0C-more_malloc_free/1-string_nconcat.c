/**
 *string_nconcat- concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: size in bytesfor string two
 *Return: pointer to allocated memory(success), NULL(failure)
 */

#include "main.h"
#include <stdlib.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int z = 0;
int j = 0;
int i = 0;
int new_str_len;
char *ptr;
unsigned int s1_size;
unsigned int s2_len = 0;
int s2_use = 0;
if (s1 == NULL)
s1 = "";
while (*(s1 + i) != '\0')
i++;
s1_size = sizeof(char) * i;
new_str_len = s1_size + n;
ptr = malloc(sizeof(*ptr) * new_str_len);
if (s2 == NULL)
s2 = "";
while (*(s2 + s2_len) != '\0')
s2_len++;

if (ptr == NULL)
return (NULL);
if (n >= s2_len)
ptr[s2_use] = s2[s2_use];

else
while (*(s1 + j) != '\0')
ptr[j] = s1[j];
j++;
while ((*s2 + z) != '\0')
ptr[j + z] = s2[z];
ptr[j + z] = '\0';
return (ptr);
}
