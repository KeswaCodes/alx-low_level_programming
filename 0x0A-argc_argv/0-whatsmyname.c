/**
 *main- prints it's name, despite anyname changes
 *@argc: the number of arguments
 *@argv: the array of arguments
 *Return: 0 - Success
 */

#include <stdio.h>

int main(int argc, char *argv[])
{

if (argc >= 1)
printf("%s", argv[0]);
printf("\n");
return (0);
}
