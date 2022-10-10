#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* new_dog - return a new dog details
* @name: parameter
* @age: parameter
* @owner: parameter
*
* Return: Always o (Success)
*/

dog_t *new_dog(char *name, float age, char *owner)
{
char *n, *o;
int i, j;
dog_t *new_dog = malloc(sizeof(dog_t));
if (!name || !age || !owner)
return (NULL);
n = malloc(sizeof(name) + 1);
if (n == NULL)
{
free(new_dog);
return (NULL);
}
for (i = 0; name[i] != '\0'; i++)
n[i] = name[i];
n[i] = '\0';
(*new_dog).name = n;
o = malloc(sizeof(owner) + 1);
if (o == NULL)
{
free((*new_dog).name);
free(new_dog);
return (NULL);
}
for (j = 0; owner[j] != '\0'; j++)
o[j] = owner[j];
o[j] = '\0';
(*new_dog).owner = o;
(*new_dog).age = age;
return (new_dog);
}

/**
* length - get the length of s
* @s: parameter
*
* Return: length
*/

int length(char *s)
{
int a = 0;
while (s[a])
a++;
return (a);
}
