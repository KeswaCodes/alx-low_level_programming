#include <stdlib.h>
#include "main.h"

/**
 *create_array- will create and array of chars & initialise
 *@size: a parameter
 *@c: a parameter
 *Return: char
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *a;

if (size == 0)
{
return (NULL);
}
a = malloc(sizeof(char) * size);

if (a == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
a[i] = c;

}




return (a);


}
