#include "lists.h"

/**
* find_listint_loop - find address of the loop pointer
* @head: pointer to structure node head
*
* Return: Always 0 (Success)
*/

listint_t *find_listint_loop(listint_t *head)
{
listint_t *check = head, *check2 = head;
while (check2)
{
while (check)
{
if (check->next == check2)
return (check->next);
check = check->next;
}
check2 = check2->next;
}
return (NULL);
}

