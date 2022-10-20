#include "lists.h"

/**
* free_list - free head
* @head: pointer to structure node
*
* Return: Always 0 (Success)
*/

void free_list(list_t *head)
{
list_t *next;
while (head != NULL)
{
next = head->next;
free(head->str);
free(head);
head = next;
}
}
