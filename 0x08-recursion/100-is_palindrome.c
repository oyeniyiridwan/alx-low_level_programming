#include "main.h"


/**
* is_palindrome - check if the string is identical
* @s: parameter
*
* Return: Always 0 (Success)
*/

int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
if (len == 1 || len == 0)
return (1);
return (compare(s, 0, len - 1));
}


/**
* _strlen_recursion - returns length of s
* @s: parameter
*
* Return: Always 0 (Success)
*/

int _strlen_recursion(char *s)
{
if (s[0] == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
* compare - compare string
* @s: parameter
* @i: parameter
* @j: parameter
*
* Return: Always 0 (Success)
*
*/


int compare(char *s, int i, int j)
{
if (i == j)
return (1);
if (i == j - 1)
return (s[i] == s[j]);
if (s[i] != s[j])
return (0);
return (compare(s, i + 1, j - 1));
}
