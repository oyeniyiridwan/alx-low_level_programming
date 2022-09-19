
#include "main.h"

/**
* rev_string - reverse s
* @s: parameters
*
* Return: o Always(Success)
*/

void rev_string(char *s)
{

int i = 0;
int w;
int p = 0;
while (s[i] != '\0')
{
i++;
}
i--;
while (i > p)

{
w = s[i];
s[i] = s[p];
s[p] = w;
i--;
p++;
}
}
