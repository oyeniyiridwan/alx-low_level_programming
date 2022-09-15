#include "main.h"

/**
* print_diagonal - print "\" n times diagonally
* @n: parameter
*
* Return: 0 (Success)
*/

void print_diagonal(int n)
{
if (n > 0)
{
int a = 1;
while (a <= n)
{
int p;
for (p = 1; p < a; p++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
a++;
}
}
else
{
_putchar('\n');
}
}
