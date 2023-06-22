#include <stdio.h>

/**
 *get_op_func- selects correct function based on operation passed
 *@s: operator passed to program
 *Return: result
 */

int (*get_op_func(char *s))(int, int)
{

op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i;
i = 0;

while (i < 5)
{
if (s == ops[i][0])
break;

else
return (NULL);
i++;
}

return (ops[i].f);
}


