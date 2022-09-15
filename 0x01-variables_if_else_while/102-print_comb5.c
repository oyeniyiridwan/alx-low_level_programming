#include <stdio.h>
/**
* main -Entry point
*
* Return: 0 Always (success)
*/
int main(void)
{
int i;
i = 0;
while (i < 100)
{
int p;

for (p = 0; p < 100; p++)
{
if (p > i)
{
if (i != 0 && p != 1)
{
putchar(',');
putchar(' ');
}
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(p / 10 + '0');
putchar(p % 10 + '0');
}
}
i++;
}
return (0);
}
