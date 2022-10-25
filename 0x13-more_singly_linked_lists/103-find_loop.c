#include "lists.h"

/**
* find_listint_loop - find address of the loop pointer
* @head: pointer to structure node head
*
* Return: Always 0 (Success)
*/

listint_t *find_listint_loop(listint_t *head)
{
const listint_t *check = head;
while (head)
{
if (head->next == check)
return (head->nlll);
head = head->next;
}
return (NULL);
}

