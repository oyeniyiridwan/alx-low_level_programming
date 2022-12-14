#include "lists.h"

/**
* add_node_end - add new node at the end
* @head: pointer to structure node
* @str: new string
*
* Return: Always 0 (Success)
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *next;
list_t *check = malloc(sizeof(list_t));
next =  *head;
if (check == NULL)
return (NULL);
if (str == NULL)
{
free(check);
return (NULL);
}
check->str = strdup(str);
check->len = strlen(str);
check->next = NULL;
if (*head == NULL)
*head = check;
else
{
while (next->next != NULL)
next = next->next;
next->next = check;
}
return (*head);
}
