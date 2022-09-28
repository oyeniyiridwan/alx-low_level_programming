#include "main.h"


/**
* wildcmp - check if the string is identical
* @s1: parameter
* @s2: parameter
*
* Return: Always 0 (Success)
*/

int wildcmp(char *s1, char *s2)
{
int a = _strlen_recursion(s1);
int b = _strlen_recursion(s2);
if (s1[a - 1] == s2[b - 1] || s2[b - 1] == '*')
return (wild(s1, s2));
return (0);
}


/**
* wild -check while considering the wild character '*'
* @s1: parameter
* @s2: parameter
*
* Return: Always 0 (Success)
*/

int wild(char *s1, char *s2)
{

if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
return (wild(s1 + 1, s2 + 1));
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s2 == '*')
{
if (wild(s1, s2 + 1) || wild(s1 + 1, s2))
return (1);
if (*(s1 + 1) != '\0' && *s2 == '\0')
return (0);
}
return (0);
}

/**
*_strlen_recursion - return length
* @s: parameter
*
*Return:  Always 0 (Success)
*/


int _strlen_recursion(char *s)
{
if (s[0] != '\0')
return (1 + _strlen_recursion(s + 1));
return (0);
}
