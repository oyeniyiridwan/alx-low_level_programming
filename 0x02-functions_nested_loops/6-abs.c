#include "main.h"
/**
* _abs - absolute value
*@n: parameter
*
* Return: 0 Always (Success)
*/

int _abs(int n)
{
int result = 0;
if (n > 0)
{
result = n;
}
else if (n < 0)
{
result = (n  * -1);
}
return (result);
}
