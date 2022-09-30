#include <stdio.h>

/**
* main - print all arguments passed
* @argc: parameter
* @argv: parameter
*
* Return: Always o (Success)
*/


int main(int argc, char **argv)
{
if (argc >= 1)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
}
return (0);
}
