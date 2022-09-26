#include "main.h"
/**
* _memset - fill the first n bytes of the memory area pointed by s with byte b
* @s: parameter
* @b: parameter
* @n: parameter
*
* Return: Always 0 (Success)
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
