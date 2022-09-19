#include "main.h"
#include <stdio.h>

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
char *str;
int len;
str = "My first strlen!";
len = _strlen(str);
printf("%d\n", len);
return (0);
}
