#include "main.h"

/**
* rot13 - convert characters in s usung rot13 format
* @s: parameter
*
* Return: Always 0 (Success)
*/

char *rot13(char *s)
{
int i;
int len = _strlen(s);
char lower[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char upper[52] = "nopqrstuvwxyzabcdefgnijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; i < len; i++)
{
int q;
for (q = 0; q < 52; q++)
{
if (s[i] == lower[q])
{
s[i] = upper[q];
break;
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
