#include "main.h"
#include <stdlib.h>

/**
* main - prints the multiplication of arguments
* @argc: parameter , total arguments
* @argv: array of argument
*
* Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
int a;
char *result;
if (argc != 3)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}
result = solution(argv[1], argv[2]);
for (a = 0; result[a]; a++)
_putchar(result[a]);
_putchar('\n');
return (0);
}

/**
* solution - returns the multiplication if s1 and s2
* @s1: parameter
* @s2: parameter
*
* Return: Always 0 (Success)
*/


char *solution(char *s1, char *s2)
{
char v = '0';
int a = 0,  len2, len1;
while  (s1[a] != '\0')
{
if ((s1[a] >= 48) && (s1[a] <= 57))
a++;
else
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}
}
a = 0;
while  (s2[a] != '\0')
{
if ((s2[a] >= 48) && (s2[a] <= 57))
a++;
else
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}
}
len2 = _strlen(s2);
len1 = _strlen(s1);
if (len2 > len1)
return (infinite_multiply(s2, s1, len1 - 1, &v));
return (infinite_multiply(s1, s2, len2 - 1, &v));
}

/**
* infinite_multiply - returns a  pointer to the multiplication of n1
* and last  index of b2
* @b2: parameter
* @n1: parameter
*@len: parameter
*@last: parameter
*
*Return: pointer
*/

char *infinite_multiply(char *n1, char *b2, int len, char *last)
{
if (len >= 0)
{
char *final, w = b2[len] - 48, *r;
int k, p, multiply, length = _strlen(n1), add = 0, length2 = _strlen(b2);
multiply = length2 - len - 1;
r = malloc(sizeof(char) * length + multiply + 1);
for (p = 0; p <= length; p++)
{
int a, c;
if ((length - 1 - p) < 0)
a = 0;
else
a = n1[length - 1 - p] - 48;
c = (a *w) + add;
if (c > 9)
add = c / 10, c = c % 10;
else
add = 0;
r[length - p] = c + 48;
}
if (r[0] == '0')
{
int h;
for (h = 1; h <= length; h++)
r[h - 1] = r[h];
r[length + multiply] = '0';
for (k = 0; k < multiply; k++)
r[length + k] = '0';
}
else
{
r[length + 1 + multiply] = '0';
for (k = 0; k < multiply; k++)
r[length + 1 + k] = '0';
}
final = malloc(sizeof(r));
infinite_add(r, last, final);
free(r);
return (infinite_multiply(n1, b2, len - 1, final));
}
return (last);
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




/**
* infinite_add - add n1 to n2
* @n1: parameter
* @n2: parameter
* @r: parameter
*
* Return: Always 0 (Success)
*/

char *infinite_add(char *n1, char *n2, char *r)
{
int p, length, add = 0, len = _strlen(n1), len2 = _strlen(n2);
if (len > len2)
length = len;
else
length = len2;
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
