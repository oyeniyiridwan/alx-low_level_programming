#include "main.h"

/**
* print_number - print n
* @n: parameter
*
* Return: 0 (Success)
*/

void print_number(int n)

{
unsigned int a, b;
int i;
int c = 1;
if (n < 0)
{
n = n * -1;
_putchar('-');
}
a = n;
b = a;
if (a > 9)
{
while (a >= 10)
{
c = c * 10;
a = a / 10;
}
_putchar((b / c) +'0');
c = c / 10;
for (i = c; i >= 1; i = i / 10)
_putchar((b / i) % 10 + '0');
}
else
_putchar(a + '0');
}
