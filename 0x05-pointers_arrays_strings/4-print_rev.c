#include "main.h"

/**
* print_rev - print str in reverse order
* @s: parameters
*
* Return: o Always(Success)
*/

void print_rev(char *s)
{

int i = 0;
while (s[i] != '\0')
{
i++;
}
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}