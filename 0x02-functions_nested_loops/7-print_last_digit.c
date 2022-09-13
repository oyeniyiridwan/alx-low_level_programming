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
if (n < 0)
{
result = ((n * -1) % 10);
return (result + (result * 10));
}
else if (n > 0)
{
result = n % 10;
return (result + (result * 10));
}
else
{
return (00);
}
}
