#include "lists.h"

/**
* print_list - print element of h
* @h: pointer to structure node
*
* Return: Always 0 (Success)
*/

size_t print_list(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] [%s]\n", h->len, h->str);
i++;
h = h->next;
}
return (i);
}
