#include <stdio.h>
/**
* main -Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
int b;
b = i + 1;
while (b <= 9)
{
if (b != 1)
{
putchar(',');
putchar(' ');
}
putchar(i + '0');
putchar(b + '0');
b++;
}
}
putchar('\n');
return (0);
}
