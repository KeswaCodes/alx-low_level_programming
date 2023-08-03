#include "main.h"
/**
 *binary_to_uint- converts a binary number to unsigned int
 *@b: binary string
 *Return: converted number (successful)
 *or 0 if b is NULL or not binary
 */

unsigned int binary_to_uint(const char *b)
{

unsigned int i, integer = 0, j = 0;

if (b == NULL)
return (0);

/*loop through binary to check for values > 1 and values < 0*/
for (i = 1; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);


}

while (b[j] != '\0')
{
integer = (integer << 1) | (b[j] - '0');
j++;
}

return (integer);
}
