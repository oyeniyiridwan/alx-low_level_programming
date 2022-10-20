#include "lists.h"
#include <stdio.h>

/**
* print_list - print element of h
* @h: pointer to structure node
*
* Return: Always 0 (Success)
*/

size_t print_list(const list_t *h)
{
register int i = 0;
while (h)
{
printf("[%d] [%s]\n", h->len, h->str);
h = h->next;
i++;
}
return (i);
}
