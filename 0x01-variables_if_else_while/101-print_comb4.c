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
int c;
c = b + 1;
while (c <= 9)
{
if (c != 2)
{
putchar(',');
putchar(' ');
}
putchar(i + '0');
putchar(b + '0');
putchar(c + '0');
c++;
}
b++;
}
}
putchar('\n');
return (0);
}
