#include "variadic_functions.h"

/**
* print_numbers - print arguments
* @n: number of arguments
* @separator: separates the arguments
*
* Return: Always 0 (Success)
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
va_start(ap, n);
if (n != 0)
{
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}
}
