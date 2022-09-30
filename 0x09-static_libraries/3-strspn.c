#include "main.h"
/**
* _strspn - number of byte in intial segment s which consist bytes from accept
* @s: parameter
* @accept: parameter
*
* Return: Always 0 (Success)
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, y = 0;
while (s[i] != ',' && s[i] != ' ')
{
unsigned  int p = 0;
while (accept[p] != '\0')
{
if (accept[p] == s[i])
{
y++;
break;
}
p++;
}
i++;
}
return (y);
}
