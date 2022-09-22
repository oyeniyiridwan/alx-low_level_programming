#include "main.h"

/**
* infinite_add - add n1 to n2
* @n1: parameter
* @n2: parameter
* @r: parameter
* @size_r: parameter
*
* Return: Always 0 (Success)
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int p, length, add = 0, len = _strlen(n1), len2 = _strlen(n2);
if (len > len2)
length = len;
else
length = len2;
if (length + 1 >= size_r)
return (0);
else
{
for (p = 0; p <= length; p++)
{
int a, b, c;
if ((len - 1 - p) < 0)
a = 0;
else
a = n1[len - 1 - p] - 48;
if ((len2 - 1 - p) < 0)
b = 0;
else
b = n2[len2 - 1 - p] - 48;
c = a + b + add;
if (c > 9)
{
add = c / 10, c = c % 10;
}
else
add = 0;
r[length - p] = c + 48;
}
if (r[0] == '0')
{
int h;
for (h = 1; h <= length; h++)
r[h - 1] = r[h];
r[length] = '\0';
}
else
r[length + 1] = '\0';
return (r);
}
}


/**
* _strlen - returns length of str
* @str: parameter
*
* Return: Always an int
*/

int _strlen(char *str)
{
int e = 0;
while (str[e] != '\0')
{
e++;
}
return (e);
}
