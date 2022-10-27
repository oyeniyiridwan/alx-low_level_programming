#include "main.h"

/**
* binary_to_uint - convert binary b bto unsigned int
* @b: binary
*
* Return: 0 if fails
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int i, sum = 0;
if (b)
{
for (i = 0; b[i]; i++)
{
if (b[i] == 48 || b[i] == 49)
{
unsigned int result = 1, d = i + 1;
while (b[d])
{
result *= 2;
d++;
}
sum += ((b[i] - 48) * result);
}
else
return (0);
}
return (sum);
}
return (0);
}
