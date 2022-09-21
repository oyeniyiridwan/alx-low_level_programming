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
char ade[13] = " ,;.\n\t!?\"(){}";
for (i = 0; i < len; i++)
{
int p;
for (p = 0; p < 13; p++)
{
if (n[i] == ade[p])
{
if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
n[i + 1] = n[i + 1] - 32;
break;
}
}
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
