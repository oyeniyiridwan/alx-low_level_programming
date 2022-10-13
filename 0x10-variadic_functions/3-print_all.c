#include "variadic_functions.h"

/**
* print_all - print all arguments
* @format: information on types of arguments
*
* Return: Always 0 (Success)
*/

void print_all(const char * const format, ...)
{
char *string, *separator = "";
unsigned int i = 0;
va_list ap;
va_start(ap, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(ap, int));
break;
case 'i':
printf("%s%d", separator, va_arg(ap, int));
break;
case 'f':
printf("%s%f", separator, va_arg(ap, double));
break;
case 's':
string = va_arg(ap, char *);
if (!string)
string = "(nil)";
printf("%s%s", separator, string);
break;
default:
i++;
continue;
}
i++;
separator = ", ";
}
}
printf("\n");
va_end(ap);
}
