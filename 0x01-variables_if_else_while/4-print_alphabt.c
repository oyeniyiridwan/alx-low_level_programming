#include <stdio.h>
/**
* main -Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char i;

i = 'a';
for (i = 'a'; i <= 'z'; i++)
if (i != 'e' && i != 'q')
{
putchar(i);
}
putchar('\n');
return (0);
}
