#include "main.h"


/**
* _print_rev_recursion - print string s in reverse follow by a ney line
* @s: parameter
*
* Return: Always 0 (Success)
*/

void _print_rev_recursion(char *s)
{
if (s[0] != '\0')
{
_print_rev_recursion(s + 1);
_putchar(s[0]);
}
}
