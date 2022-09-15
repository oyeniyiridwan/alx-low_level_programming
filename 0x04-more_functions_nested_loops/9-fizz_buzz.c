#include "main.h"
#include <stdio.h>

/**
* main - print numbers 1-100, using fizzbuzz instrutions
*
* Return: 0 (Success)
*/

int main(void)
{
int a = 1;
for (a = 1; a <= 100; a++)
{
if ((a % 15) == 0)
{
printf("FizzBuzz");
}
else if ((a % 3) == 0)
{
printf("Fizz");
}
else if ((a % 5) == 0)
{
printf("Buzz");
}
else
{
printf("%d", a);
}
printf(" ");
}
printf("\n");
return (0);
}
