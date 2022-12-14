#include "main.h"
/**
* print_to_98 - print natural numbers to 98
* @n:parameter
*
* Return: 0 Always (Success)
*/

void print_to_98(int n)
{
if (n >= 98)
{
positive(n);
}
else
{
negative(n);
}
}

/**
* positive - positive values
* @n: parameter
*/

void positive(int n)
{
int i, f;
for (i = n; i >= 98; i--)
{
if (i != n)
{
_putchar(',');
_putchar(' ');
}
f = i;
if (i >= 100)
{
f = i % 100;
_putchar(i / 100 + '0');
}
_putchar(f / 10 + '0');
_putchar(f % 10 + '0');
}
_putchar('\n');
}

/**
* negative - negative values
* @n: parameter
*/

void negative(int n)
{
int y, k;
for (y = n; y <= 98; y++)
{
k = y;
if (y != n)
{
_putchar(',');
_putchar(' ');
}
if (y < 0)
{
k = y * -1;
_putchar('-');
}
if (y <= -100)
{
_putchar(((y / 100) * -1) + '0');
k = (y % 100) * -1;
}
if (y < -9 || y > 9)
{
_putchar(k / 10 + '0');
}
_putchar(k % 10 + '0');
}
_putchar('\n');
}
