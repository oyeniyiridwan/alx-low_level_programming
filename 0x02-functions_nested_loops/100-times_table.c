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
int i = 0;
if (n <= 15 || n >= 0)
{
while (i <= n)
{
int p = 0;
for (p = 0; p <= n; p++)
{
int w;
if (p != 0)
{
_putchar(',');
_putchar(' ');
}
 w = i * p;
if (w < 100)
_putchar(' ');
if (w >= 100)
{
_putchar(w / 100 + '0');
w = w % 100;
if (w < 10)
_putchar(w / 10 + '0');
}
if (w  > 9)
_putchar(w / 10 + '0');
_putchar(w % 10 + '0');
}
_putchar('\n');
i++;
}
}
}
