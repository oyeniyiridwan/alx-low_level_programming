#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - returns a pointer to the duplicate of str
* @str: parameter
*
* Return: Always 0  (Success)
*/

char *_strdup(char *str)
{
unsigned int len = _strlen(str);
char *p;
unsigned int i;
if (str == NULL)
{
p = malloc(len * sizeof(char) + 1);
if (p == NULL)
return (NULL);
for (i = 0; i <= len; i++)
{
p[i] = str[i];
}
return (p);
}
return (NULL);
}

/**
* _strlen - returns the length of str
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
