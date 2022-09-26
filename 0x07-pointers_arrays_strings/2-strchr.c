#include "main.h"
#include <stdio.h>

/**
* _strchr -point to the first occurence of c in string s
* @s: parameter
* @c: parameter
*
* Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
