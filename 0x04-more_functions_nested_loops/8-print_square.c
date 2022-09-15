#include "main.h"

/**
* print_square - prints square of size using #
* @size: parameter
*
* Return: 0 (Success)
*/

void print_square(int size)
{
if (size > 0)
{
int a = 1;
while (a <= size)
{
int p;
for (p = 1; p <= size; p++)
{
_putchar('#');
}
_putchar('\n');
a++;
}
}
else
{
_putchar('\n');
}
}
