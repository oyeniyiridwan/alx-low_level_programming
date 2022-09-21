#include "main.h"

/**
* _strcmp - compare s1 and s2 and return its value
* @s1: parameter
* @s2: parameter
*
* Return: Always 0 (Success)
*/

int _strcmp(char *s1, char *s2)
{
int i, p;
int s1len = _strlen(s1);
int s2len = _strlen(s2);
int range;
if (s1len > s2len)
range = s1len;
else
range = s2len;
for (i = 0; i < range; i++)
{
if (s1[i] != s2[i])
{
p = s1[i] - s2[i];
break;
}
else
p = 0;
}
return (p);
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
