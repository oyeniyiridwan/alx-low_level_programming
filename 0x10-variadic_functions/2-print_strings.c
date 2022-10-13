#include "variadic_functions.h"

/**
* print_strings - print arguments which are strings
* @n: number of arguments
* @separator: separates the arguments
*
* Return: Always 0 (Success)
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
char *s;
va_start(ap, n);
if (n != 0)
{
for (i = 0; i < n; i++)
{
s = va_arg(ap, char *);
if (!s || s == "")
s = "(nil)";
printf("%s", s);
if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}
}
