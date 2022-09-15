#include "main.h"

/**
* print_number - print n
* @n: parameter
*
* Return: 0 (Success)
*/

void print_number(int n)
{
int a, b, c, d;
if (n < 0)
{
_putchar('-');
n = n * -1;
}
if (n >= 10000)
{
_putchar(n / 10000 + '0');
a = n % 10000;
}
else
a = n;
if (a >= 1000 || n >= 10000)
{
_putchar(a / 1000 + '0');
b = a % 1000;
}
else
b = a;
if (b >= 100 || b >= 1000 || n >= 10000)
{
_putchar(b / 100 + '0');
c = b % 100;
}
else
c = b;
if (c >= 10 || b >= 100 || a >= 1000 || n>= 10000)
{
_putchar(c / 10 + '0');
d = c % 10;
}
else
d = c;
_putchar(d % 10 + '0');
}
