#include "main.h"

/**
* more_numbers - print numbers 0-14 ten times
*
* Return: 0 (Success)
*/

void more_numbers(void)
{
int p;
for (p = 0; p < 10; p++)
{
int a = 0;
while (a <= 14)
{
if (a > 9)
{
_putchar(a / 10 + '0');
}
_putchar(a % 10 + '0');
a++;
}
_putchar('\n');
}
}
