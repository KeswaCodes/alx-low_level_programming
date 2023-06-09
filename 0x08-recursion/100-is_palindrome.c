/**
 *is_palindrome- checks whether string is a palindrome or not
 *@s: pointer to string
 *Return: 1 if string is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
else 
s += 1;
return (is_palindrome(s));

}
