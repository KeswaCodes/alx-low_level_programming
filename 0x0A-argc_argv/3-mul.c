/**
 *main- multiplies two numbers together
 *@argc: argument count
 *@argv: argument vector
 * Return: 0 (Success), 1 (Fail)
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])



{
int a = atoi(argv[1]);
int b = atoi(argv[2]);
int product = a * b;

if (argc >= 3)
{
printf("%d", product);
printf("\n");
return (0);
}

else
{
printf("Error");
printf("\n");
return (1);
}
}
