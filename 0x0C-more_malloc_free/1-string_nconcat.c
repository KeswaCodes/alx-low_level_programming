#include "main.h"

/**
 *use_s2- returns a string s2
 *@s2: string to be printed
 *@ptr: malloc'd space
 *@len2: length of string
 *Return: s2 in malloced string
 */

char *use_s2(char *s2, char *ptr, int len2)
{
int i = 0;

if (s2 == NULL)
s2 = "";

while (i <= len2)
ptr[i] = s2[i];
i++;

ptr[i] = '\0';
return (ptr);
}

/**
 *string_nconcat- concatenates 2 strings
 *@s1: first string
 *@s2: second string
 *@n: n byte of s2
 *Return: pointer to newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *ptr;
unsigned int len1, len2, i, j;


/* Determine the length of s1 */
for (len1 = 0; s1[len1] != '\0'; len1++)
;

ptr = malloc((len1 + n) + 1);

if (ptr == NULL)
return (NULL);

/* Determine the length of s2 */
for (len2 = 0; s2[len2] != '\0'; len2++)
;
if (n > len2 || n == len2)
return (use_s2(s2, ptr, len2));


if (s1 == NULL)
s1 = "";

for (i = 0; i < len1; i++)
ptr[i] = s1[i];

if (s2 == NULL)
s2 = "";

for (j = 0; j < n; j++)
ptr[len1 + j] = s2[j];

ptr[len1 + j] = '\0';


return (ptr);
}

