#include "lists.h"

/**
* list_len - total element of h
* @h: pointer to structure node
*
* Return: Always 0 (Success)
*/

size_t list_len(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
