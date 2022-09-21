#include "main.h"

/**
* string_toupper - convert lowercase character in n to uppercase
* @n: parameter
*
* Return: Always 0 (Success)
*/

char *string_toupper(char *n)
{
int i;
int len = _strlen(n);

for (i = 0; i < len; i++)
{
if (n[i] >= 97 && n[i] <= 122)
n[i] = n[i] - 32;
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
