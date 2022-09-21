#include "main.h"

/**
* cap_string - convert some lowercase character to uppercase
* @n: parameter
*
* Return: Always 0 (Success)
*/

char *cap_string(char *n)
{
int i;
int len = _strlen(n);

for (i = 0; i < len; i++)
{
int p;
p = n[i];
if (p < 48 || (p > 57 && p < 65) || p > 122 || (p > 90 && p < 97))
if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
n[i + 1] = n[i + 1] - 32;
}
return (n);
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
