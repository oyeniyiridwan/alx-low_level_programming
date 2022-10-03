#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* strtow - split strings into words
* @str: parameter
*
* Return: NULL if it fails
*/

char **strtow(char *str)
{
char **p;
int count, w, q, z;
if (str == NULL || str[0] == 0)
return (NULL);
count = majorwords(str);
if (count < 1)
return (NULL);
p = malloc(sizeof(char *) * count);
if (p == NULL)
return (NULL);
w = 0;
while (w < count && *str != '\0')
{
if (*str != ' ')
{
q = 0;
while (str[q] != ' ')
q++;
p[w] = malloc(sizeof(char) * (q));
if (p[w] == NULL)
{
while (--w >= 0)
free(p[--w]);
free(p);
return (NULL);
}
z = 0;
while (z < q)
{
p[w][z] = *str;
z++, str++;
}
p[w][z] = '\0';
w++;
}
str++;
}
p[w] = '\0';
return (p);
}


/**
* count - count words
* @str: parameter
* @i: parameter
*
* Return: total words
*/

int count(char *str, int i)
{
if (str[i] == '\0')
return (0);
if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
return (1 + count(str, i + 1));
return (count(str, i + 1));
}


/**
* majorwords - gives perfect count
* @str: parameter
*
* Return: total words
*/

int majorwords(char *str)
{
if (str[0] != ' ')
return (1 + count(str, 0));
return (count(str, 0));
}
