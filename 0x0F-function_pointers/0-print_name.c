#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name- prints a name
 *@name: name to be printed
 *@f: pointer to function accepting char as an argument
 *Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
f(name);

}


