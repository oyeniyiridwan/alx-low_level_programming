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
while (i < 24)
{
int p;

for (p = 0; p < 60; p++)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
_putchar(':');
_putchar(p / 10 + '0');
_putchar(p % 10 + '0');
_putchar('\n');
}
i++;
}
}
