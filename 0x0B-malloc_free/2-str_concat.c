#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - concatenates s1 and s2
* @s1: parameter
* @s2: parameter
*
* Return: Always 0  (Success)
*/

char *str_concat(char *s1, char *s2)
{
int length;
char *p;
int i;
char ade[] = "";
if (s1 == NULL)
s1 = ade;
if (s2 == NULL)
s2 = ade;
length = _strlen(s1);
length = _strlen(s1) + _strlen(s2);
p = malloc((length + 1) * sizeof(char));
if (p == NULL)
return (NULL);
for (i = 0; i <= length; i++)
{
if (i >= _strlen(s1))
p[i] = s2[i - _strlen(s1)];
else
p[i] = s1[i];
}
return (p);
}

/**
* _strlen - the length of str
* @str: parameter
*
* Return: Always 0 (Success)
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
