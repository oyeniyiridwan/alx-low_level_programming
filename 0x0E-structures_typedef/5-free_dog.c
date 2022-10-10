#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_dog - free dogs
* @d: parameter
* Descriptions: the progran frees dogs
*
*/

void free_dog(dog_t *d)
{
if (!d)
return;
free((*d).name);
free((*d).owner);
free(d);
}
