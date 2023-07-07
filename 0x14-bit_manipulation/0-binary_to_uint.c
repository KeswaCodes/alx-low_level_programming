#include "main.h"
/**
 *binary_to_uint- converts a binary number to an unsigned int
 *@b: pointer to a binary string
 *Return: converted number (successful) or
 *
 *0 if b is NULL or there is one
 *or more chars that is not 0 or 1 (failure)
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0, product = 1, str_len = 0, i = 0;

if (!b)
return (0);

if (b[i] == '\0')
return (0);

while (b[str_len] != '\0')
str_len++;

for (i = str_len; i > 0; i--)
{
switch (b[i - 1])
{
case '0':
product *= 2;
break;

case '1':
product *= 2;
result += product;
break;

default:
return (0);
}
}

return (result / 2);
}
