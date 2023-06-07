/**
 *_strlen_recursion- returns the length of a string
 *@s: pointer to string
 *Return: string length
 */

int _strlen_recursion(char *s)
{
int count = 0;


if (s[count] == '\0')
return (0);
count++;

return (1 + _strlen_recursion(s + 1));


}
