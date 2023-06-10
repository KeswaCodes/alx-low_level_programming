/**
 *main- adds two numbers
 *@argc: argument count
 *@argv: argument vector
 *Return: result of the addition
 */
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
int main(int argc, char *argv[])
{


int j;
int sum = 0;
for (j = 1; j < argc; j++)
{

int argument = atoi(argv[j]);
if (argument)
{
sum += argument;
}
else
{
printf("Error");
printf("\n");
return (1);
}
}
printf("%d", sum);
printf("\n");
return (sum);

}  
