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
free((*d).name);
/*free((*d).age);*/
free((*d).owner);
free(d);
}
