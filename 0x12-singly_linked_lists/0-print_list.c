#include "lists.h"

/**
* print_list - print element of h
* @h: pointer to structure node
*
* Return: Always 0 (Success)
*/

size_t print_list(const list_t *h)
{
const list_t *c = h;
size_t i = 0;
while (c)
{
if (c->str)
printf("[%d] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
c = c->next;
i++;
}
return (i);
}
