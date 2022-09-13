#include <stdio.h>
#include "main.h"
/**
* times_table - print multiplication table 9
*
* Return: 0 Always (success)
*/

void times_table(void)
{
int i;
i = 0;
while (i < 10)
{
int p;

for (p = 0; p < 10; p++)
{
int w;
w = i *p;
if (p != 0)
{
_putchar(',');
_putchar(' ');
}
if (w  > 9)
{
_putchar(w / 10 + '0');
}
else if (w != 0)
{
_putchar(' ');
}
_putchar(w % 10 + '0');
}
_putchar('\n');
i++;
}
}
