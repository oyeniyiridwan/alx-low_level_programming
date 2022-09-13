#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* main -Entry point
*
* Return: 0 Always (Success)
*/

int main(void)
{

char ade[] = "_putchar";
int i = 0;
int y = (short) strlen(ade);
while (i < y)
{
_putchar(ade[i]);
i++;
}
_putchar('\n');
return (0);
}
