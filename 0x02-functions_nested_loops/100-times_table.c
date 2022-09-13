#include <stdio.h>
#include "main.h"
/**
* print_times_table - print multiplication table of n
* @n: parameter
*
* Return: 0 Always (success)
*/

void print_times_table(int n)
{
int i;
i = 0;
while (i <= n)
{
int p;

for (p = 0; p <= n; p++)
{
int w;
w = i *p;
if (p != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
if (w  > 9)
{
_putchar(w / 10 + '0');
}
else if (p != 0)
{
_putchar(' ');
}
_putchar(w % 10 + '0');
}
_putchar('\n');
i++;
}
}
