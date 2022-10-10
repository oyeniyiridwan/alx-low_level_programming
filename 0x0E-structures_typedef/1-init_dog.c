#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* init_dog - a functionthat initializes struct dog
* @d: parameter
* @name: parameter
* @age: parameter
* @owner: parameter
*
* Return: Always o (Success)
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
