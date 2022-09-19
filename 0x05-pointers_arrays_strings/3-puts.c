#include "main.h"

/**
* _puts - print str
* @str: parameters
*
* Return: o Always(Success)
*/

void _puts(char *str)
{

int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
