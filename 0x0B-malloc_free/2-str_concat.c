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
unsigned int len1 = _strlen(s1);
unsigned int len2 = _strlen(s2);
char *p;
unsigned int i;
p = malloc((len1 + len2 + 1) * sizeof(char));
if (len1 == 0 || len2 == 0 || p == NULL)
return (NULL);
for (i = 0; i <= (len1 + len2); i++)
{
if (i >= len1)
p[i] = s2[i - len1];
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
