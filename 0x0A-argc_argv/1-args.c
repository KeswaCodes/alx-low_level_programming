/**
 *program- prints the number of arguments passed to it
 *@argc: the number of arguments
 *@argv: an array of the argument vectors
 *Return: 0 - Success
 */


#include <stdio.h>
int main(int argc, char *argv[])
{

int num_args = (argc - 1);
if (argv)
{


printf("%d", num_args);
printf("\n");

}
return (0);
}
