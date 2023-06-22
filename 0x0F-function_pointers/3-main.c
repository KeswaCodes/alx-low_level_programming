#include <stdio.h>
#include <stdlib.h>

/**
 *main- main function
 *Return (0 - success)
 */

int main(int argc, char *argv[])
{

  
int result, a, b;
char c = atoi("Error");
if (argc >= 0 && argc < 5)
a = atoi(argv[1]);
b = atoi(argv[3]);
  
result = get_op_func(argv[2])(a, b);

if (result == NULL)
printf("Error\n");

      
printf(result);
return (0);
}
