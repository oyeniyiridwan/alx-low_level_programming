#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_dogs - free dogs
* @d: parameter
*
* Return: Always o (Success)
*/

void free_dog(dog_t *d)
{
if (!d)
return;
free((*d).name);
free((*d).owner);
free(d);
}
