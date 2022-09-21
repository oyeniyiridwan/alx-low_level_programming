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
int p, add = 0;
int len = _strlen(n1);
int len2 = _strlen(n2);
int length;
if (len > len2)
length = len;
else
length = len2;
r[length + 1] = '\0';
if (length + 1 >= size_r)
return (0);
else
{
for (p = 0; p < length; p++)
{
int a;
int b;
int c;
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
add = c / 10;
c = c % 10;
}
else
add = 0;
r[length - p] = c + 48;
}
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
