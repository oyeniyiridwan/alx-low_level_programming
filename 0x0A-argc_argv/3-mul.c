#include <stdio.h>
#include <stdlib.h>

/**
* main - print the multiple of two numbers passed as arguments
* @argc: parameter
* @argv: parameter
*
* Return: Always o (Success)
*/


int main(int argc, char **argv)
{
if (argc == 3)
{
  printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
return (0);
}
printf("Error\n");
return (1);
}
