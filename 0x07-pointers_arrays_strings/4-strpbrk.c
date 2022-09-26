#include "main.h"
#include <stdio.h>

/**
* _strpbrk - point to the first occurence of char in accept in string s
* @s: parameter
* @accept: parameter
*
* Return: Always 0 (Success)
*/

char *_strpbrk(char *s, char *accept)
{
while (*s)
{
int p;
for (p = 0; accept[p] != '\0'; p++)
{
if (*s == accept[p])
{
return (s);
}
}
s++;
}
return (NULL);
}
