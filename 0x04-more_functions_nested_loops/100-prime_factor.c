#include "main.h"
#include <stdio.h>
/**
* main - print biggest prime factor of 612852475143
*
* Return: 0 (Success)
*/

int main(void)
{
long d = 612852475143;
long i;
for (i = 2; i < d; i++)
{
if  (d % i == 0)
{
d = d / i;
i--;
}
}
printf("%ld\n", i);
return (0);
}
