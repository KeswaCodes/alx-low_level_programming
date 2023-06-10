
/**
 *main- prints all arguments recieved
 *@argv: argument vector
 *@argc: argument count
 *Return: 0 - Success
 */

#include <stdio.h>
int main(int argc, char *argv[])
{
int i = 0;
while (argc > i)
{
printf("%s", argv[i]);
printf("\n");
i++;
}
return (0);
}
