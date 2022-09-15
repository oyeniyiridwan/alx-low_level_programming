#include "main.h"

/**
* print_line - print "-" n times horizontally
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
_putchar('-');
a++;
}
}
_putchar('\n');
}
