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
int q, w;
while (str[i] != '\0')
{
i++;
}
i--;
q = i / 2;
for (w = q + 1; w <= i; w++)
{
_putchar(str[w]);
}
_putchar('\n');
}
