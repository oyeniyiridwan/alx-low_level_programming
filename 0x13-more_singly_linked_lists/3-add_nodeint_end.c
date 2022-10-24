#include "lists.h"

/**
* add_nodeint_end - add new node to the end of the list
* @head: pointer tothe head of the node
* @n: data of the new nodr
*
* Return: Always 0 (Success)
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *check, *check2;
check = malloc(sizeof(*head));
if (!check || !head)
return (NULL);
check->n = n;
check->next = NULL;
if (*head == NULL)
*head = check;
else
{
check2 = *head;
while (check2->next)
check2 = check2->next;
check2->next = check;
}
return (*head);
}


