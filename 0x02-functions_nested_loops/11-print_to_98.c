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
int w = i / 100;
f = i % 100;
_putchar(w + '0');
}
_putchar(f / 10 + '0');
_putchar(f % 10 + '0');
}
}
else
{
int y, k;
for (y = n; y < 98; y++)
{
if (y != n)
{
_putchar(',');
_putchar(' ');
}
_putchar('-');
k = y * -1;
if (y <= -100)
{
k = (y / 100) * -1;
k = (y % 100) * -1;
}
_putchar(k / 10 + '0');
_putchar(k % 10 + '0');
}
_putchar(',');
_putchat(' ');
_putchar('-');
_putchar(98 / 10 + '0');
_putchar(98 % 10 + '0');
}
}
