#include <stdio.h>
/**
* main -Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 1; i <= 10000; i++)
{
int w = i%100;
int z = i/100;
if(i != 1)
{
putchar(',');
putchar(' ');
}
putchar(z/10 + '0');
putchar(z%10 + '0');
putchar(' ');
putchar(w/10 + '0');
putchar(w%10 + '0'); 
}
putchar('\n');
return (0);
}
