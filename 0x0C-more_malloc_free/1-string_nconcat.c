#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates n values of s2 to s1 and return a pointer to it
* @s1: parameter
* @s2: parameter
* @n: parameter
*
*Return: if fail return NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char null[] = "";
unsigned int a, b, len1, len2;
char *p;
if (s1 == NULL)
s1 = null;
if (s2 == NULL)
s2 = null;
len1 = _strlen(s1);
len2 = _strlen(s2);
if (n < len2)
len2 = n;
a = len1 + len2;
p = malloc(sizeof(char)  * (a + 1));
if (p == NULL)
{
return (NULL);
}
for (b = 0; b < a; b++)
{
if (b >= len1)
p[b] = s2[b - len1];
else
p[b] = s1[b];
}
p[a] = '\0';
return (p);
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
