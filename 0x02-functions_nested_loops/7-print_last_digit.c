#include "main.h"
/**
* print_last_digit - print last digit of n
* @n: parameter
*
* Return: 0 Always (Success)
*/

int print_last_digit(int n)
{
int result;
int digit;
digit = n % 10;
if (n < 0)
{
result = digit *= -1;
}
_putchar(result + '0');
return (result);
}
