#include "main.h"

/**
* puts_half - print half of str
* @str: parameters
*
* Return: o Always(Success)
*/

void puts_half(char *str)
{

int i = 0;
int q;
while (str[i] != '\0')
{
i++;
}
i--;
if ((i % 2) != 0)
{
i = i + 1;
}

for (q = 0; q <= i; q++)
{
if (q >= (i / 2) + 1)
{
_putchar(str[q]);
}
}
_putchar('\n');
}
