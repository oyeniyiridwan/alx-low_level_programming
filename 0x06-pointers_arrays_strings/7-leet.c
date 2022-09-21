#include "main.h"

/**
* leet - convert (a,e,o,t,l) to (4,3,0,7,1) respectively include uppercase
* @s: parameter
*
* Return: Always 0 (Success)
*/

char *leet(char *s)
{
int i;
char lower[5] = "aeotlAEOTL";
char number[5] = "4307143071";

i = 0;
while (s[i] != '\0')
{
int q;
for (q = 0; q < 10; q++)
{
if (s[i] == lower[q])
s[i] = number[q];
}
i++;
}
return (s);
}
