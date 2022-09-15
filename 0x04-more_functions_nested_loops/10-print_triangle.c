#include "main.h"

/**
* print_triangle - prints right angle triangle to the right using #
* @size: parameter
*
* Return: 0 (Success)
*/

void print_triangle(int size)
{
if (size > 0)
{
int a;
for (a = 1; a <= size; a++)
{
int z = a;
int p = size - a;
while (p > 0)
{
_putchar(' ');
p--;
}
while (z > 0)
{
_putchar('#');
z--;
}
if (a != size)
{
_putchar('\n');
}
}
}
_putchar('\n');
}
