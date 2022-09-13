#include <stdio.h>
#include "main.h"
/**
* jack_bauer - print every minute from 00:00 t0 23:59
*
* Return: 0 Always (success)
*/

void jack_bauer(void)
{
int i;
i = 0;
while (i < 9)
{
int p;

for (p = 0; p < 9; p++)
{
int w;
w = i *p;
if (w != 0)
{
_putchar(',');
_putchar(' ');
}
if (w  > 9)
{
_putchar(w / 10 + '0');
}
_putchar(w % 10 + '0');
}
_putchar('\n');
i++;
}
}
