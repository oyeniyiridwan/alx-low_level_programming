#include "main.h"
/**
* print_alphabet_x10 - print alphabets in lower case ten times
*
* Return: 0 Always (Success)
*/

void print_alphabet_x10(void)
{
int p = 0;
while (p < 10)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
p++;
}
}
