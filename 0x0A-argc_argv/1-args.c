#include <stdio.h>

/**
* main - print number of argument
* @argc: parameter
* @argv: parameter
*
* Return: Always o (Success)
*/


int main(int argc, char **argv)
{
if (argv)
{
printf("%d\n", argc - 1);
}
return (0);
}
