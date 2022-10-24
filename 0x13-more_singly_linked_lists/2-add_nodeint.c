#include "lists.h"

/**
* add_nodeint - add new node to the beginning of the list
* @head: pointer tothe head of the node
* @n: data of the new nodr
*
* Return: Always 0 (Success)
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *check;
check = malloc(sizeof(*head));
if (!check)
return (NULL);
check->n = n;
check->next = *head;
*head = check;
return (check);
}

