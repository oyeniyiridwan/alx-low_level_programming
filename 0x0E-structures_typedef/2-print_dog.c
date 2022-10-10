#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_dog - print every element of struct dog
* @d: parameter
*
* Return: Always o (Success)
*/

void print_dog(struct dog *d)
{
if (d != NULL)
{
if ((*d).name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", (*d).name);
printf("Age: %f\n", (*d).age);
printf("Owner: %s\n", (*d).owner ? (*d).owner : "(nil)");
}
}
