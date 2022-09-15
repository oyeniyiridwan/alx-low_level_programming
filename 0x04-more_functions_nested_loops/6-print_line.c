#include "main.h"

/**
* print_line - print "_" n times horizontally
* @n: parameter
*
* Return: 0 (Success)
*/

void print_line(int n)
{
if (n > 0)
{
int a = 0;
while (a < n)
{
_putchar('_');
a++;
}
}
_putchar('\n');
}
