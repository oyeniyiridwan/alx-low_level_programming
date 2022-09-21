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
int len = _strlen(s);
char lower[5] = "aeotl";
char upper[5] = "AEOTL";
char number[5] = "43071";

for (i = 0; i < len; i++)
{
int q;
for (q = 0; q < 5; q++)
{
if (s[i] == lower[q] || s[i] == upper[q])
{
s[i] = number[q];
}
}
}
return (s);
}

/**
* _strlen - returns length of str
* @str: parameter
*
* Return: Always an int
*/
int _strlen(char *str)
{
int i = 0;
while (str[i] != '\0')
{
i++;
}
return (i);
}
