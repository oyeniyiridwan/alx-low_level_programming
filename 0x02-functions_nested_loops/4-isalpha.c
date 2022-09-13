#include "main.h"
/**
* _isalpha - check if c is alphabet
* @c:parameter
*
* Return: 0 Always (Success)
*/

int _isalpha(int c)
{
return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
