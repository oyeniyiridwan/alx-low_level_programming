#include "main.h"

/**
* puts2 - print i in multiple of 2
* @str: parameters
*
* Return: o Always(Success)
*/

void puts2(char *str)
{

int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
