#include "lists.h"

/**
* get_nodeint_at_index - return pointer to node at index
* @head: pointer to structure node head
* @index: index
*
* Return: Always 0 (Success)
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
if (head == NULL)
return (NULL);
while (i < index)
{
if (!head)
return (NULL);
head = head->next;
i++;
}
return (head);
}

